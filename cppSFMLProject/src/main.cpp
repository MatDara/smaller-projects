#include "start.h"
#include "helloWorld.h"

#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <memory>

int main(){
    std::cout << "Hello World!\n";

    sf::RenderWindow window;
    window.create(sf::VideoMode({800, 600}), "My window");

    Start start;
    
    Program *current_Program = &start; // needs to be changed from within the class

    HelloWorld test;

    start.addProgram(&test);

    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = window.pollEvent())
        {

           if(const auto* resized = event->getIf<sf::Event::Resized>()) {
                sf::FloatRect visibleArea({0.f, 0.f}, sf::Vector2f(resized->size));
                window.setView(sf::View(visibleArea));
           }

            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>() || current_Program == nullptr){
                window.close();
            }
            else{
                current_Program->call(window, event, current_Program); // use this later
            }
            


            // inside the main loop, between window.clear() and window.display()
            


            window.display();


            window.clear(sf::Color::Black);
        }
    }


    std::cout << "Goodbye cruel world!";
    return 0;
}