#include "start.h"

#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <memory>

int main(){
    std::cout << "Hello World!\n";

    sf::RenderWindow window;
    window.create(sf::VideoMode({800, 600}), "My window");

    std::unique_ptr<Program> current_Program = std::make_unique<Start>(); // needs to be changed from within the class

    Start::addProgram(Start); // add classes here that derive from the class Program

    


    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = window.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>()){
                window.close();
            }

            current_Program->call(window, event); // use this later

            


            // inside the main loop, between window.clear() and window.display()
            


            window.display();


            window.clear(sf::Color::Black);
        }
    }


    std::cout << "Goodbye cruel world!";
    return 0;
}