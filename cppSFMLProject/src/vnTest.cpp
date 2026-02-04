#include "vnTest.h"
#include "sfmlButton.h"

void VNTest::call(sf::RenderWindow &window, const std::optional<sf::Event> &event, Program *&currentProgram)
{
    this->window = &window;
    this->event = &event;

    if (const auto *keyPressed = event->getIf<sf::Event::KeyPressed>())
    {
        if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
        {
            VNTest::end(currentProgram);
        }

    }

    if (!initialized)
    {
        initialize();
        initialized = true;
    }

    switch (this->state)
    {
    case State::Menu:
        /* code */
        break;
    
    case State::Game:
        /* code */
        break;

    case State::Settings:
        /* code */
        break;
        
    default:
        // Error handling
        break;
    }
}

void VNTest::initialize(){


    window->setSize(sf::Vector2u {600, 800});
}

void VNTest::menu(){

}