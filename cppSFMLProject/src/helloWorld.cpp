#include "helloWorld.h"
#include <iostream>
#include <SFML/Graphics.hpp>

namespace {
    sf::Font font("../../fonts/Swansea-q3pd.ttf");
}

void HelloWorld::call(sf::RenderWindow &window, const std::optional<sf::Event>& event,  Program *&currentProgram) {
    if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if(keyPressed->scancode == sf::Keyboard::Scancode::Escape){
                    HelloWorld::end(currentProgram);
                }

                if(keyPressed->scancode == sf::Keyboard::Scancode::Enter){
                    std::cout << "Hello World!\n";
                }
            }
}