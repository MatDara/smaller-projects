#include "start.h"
#include <iostream>
#include <SFML/Graphics.hpp>

namespace
{
    sf::Font font("../../fonts/Swansea-q3pd.ttf");
}

std::vector<Program *> Start::programs_;

void Start::call(sf::RenderWindow &window, const std::optional<sf::Event> &event, Program *&currentProgram)
{

    if (const auto *keyPressed = event->getIf<sf::Event::KeyPressed>())
    {
        if (keyPressed->scancode == sf::Keyboard::Scancode::Space)
        {
            if (index_ == programs_.size())
            {
                std::cout << "Exit Program\n";
            }
            else
            {
                std::cout << programs_.at(index_)->getName() << std::endl;
            }
        }

        if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
        {
            Start::end(currentProgram);
        }

        if (keyPressed->scancode == sf::Keyboard::Scancode::Enter)
        {
            if (index_ == programs_.size())
            {
                Start::end(currentProgram);
            }
            else
            {
                currentProgram = programs_.at(index_);
            }
        }

        if (keyPressed->scancode == sf::Keyboard::Scancode::Up)
        {
            moveIndex(-3);
        }
        if (keyPressed->scancode == sf::Keyboard::Scancode::Down)
        {
            moveIndex(3);
        }
        if (keyPressed->scancode == sf::Keyboard::Scancode::Right)
        {
            moveIndex(-1);
        }
        if (keyPressed->scancode == sf::Keyboard::Scancode::Left)
        {
            moveIndex(1);
        }
    }
    else if (const auto *mouseWheelScrolled = event->getIf<sf::Event::MouseWheelScrolled>())
    {
        moveIndex(mouseWheelScrolled->delta);
    }

    drawWindow(window);
}

void Start::drawWindow(sf::RenderWindow &window)
{ // should be called with window

    sf::Text text(font);
    text.setCharacterSize(24);
/*
    text.setPosition({10.f, 10.f});
    text.setString(std::to_string(index_)); // debug
    window.draw(text);
*/
    sf::Vector2 pos = window.getSize();

    pos.x /= 2;
/*
    text.setPosition({pos.x, 10.f});
    text.setString(std::to_string(pos.x));
    text.setFillColor(sf::Color::Red);
    text.setStyle(sf::Text::Underlined);
    window.draw(text);
*/
    int layer = 0;
    for (int i = 0; i <= programs_.size(); i++)
    {
        if(i == index_){    
            text.setStyle(sf::Text::Underlined);
            text.setFillColor(sf::Color::Blue);
        }
        else{
            text.setStyle(sf::Text::Regular);
            text.setFillColor(sf::Color::White);
        }
        if (i == programs_.size())
        {
            // draw "end program" option
            switch (i % 3)
            {
            case 0:
                // draw left
                text.setString("End Program");
                text.setPosition({10.f, 10.f * (layer + 1)});

                window.draw(text);
                break;

            case 1:
                // draw middle;
                text.setString("End Program");
                text.setOrigin({text.getGlobalBounds().size.x / 2, 0});
                text.setPosition({pos.x, 10.f * (layer + 1)});

                window.draw(text);
                break;

            case 2:
                // draw right
                text.setString("End Program");
                text.setOrigin({text.getGlobalBounds().size.x, 0});
                text.setPosition({window.getSize().y, 10.f * (layer + 1)});

                window.draw(text);
                layer++;
                break;
            }
        }
        else{

            switch (i % 3)
            {
            case 0:
                // draw left
                text.setString(programs_.at(i)->getName());
                text.setPosition({10.f, 10.f * (layer + 1)});

                window.draw(text);
                break;

            case 1:
                // draw middle;
                text.setString(programs_.at(i)->getName());
                text.setOrigin({text.getGlobalBounds().size.x / 2, 0});
                text.setPosition({pos.x, 10.f * (layer + 1)});

                window.draw(text);
                break;

            case 2:
                // draw right
                text.setString(programs_.at(i)->getName());
                text.setOrigin({text.getGlobalBounds().size.x, 0});
                text.setPosition({window.getSize().y, 10.f * (layer + 1)});

                window.draw(text);
                layer++;
                break;
            }
        }
    }
}

void Start::moveIndex(int direction)
{
    switch (direction)
    {
    case 1:
        index_--;
        break;
    case -1:
        index_++;
        break;
    case 3:
        index_ += 3;
        break;
    case -3:
        index_ -= 3;
        break;
    }
    if (index_ > programs_.size())
    { // only bigger because the end is outside of programs_
        index_ = programs_.size();
    }
    if (index_ < 0)
    {
        index_ = 0;
    }
}

void Start::end(Program *&currentProgram)
{
    currentProgram = nullptr;
}