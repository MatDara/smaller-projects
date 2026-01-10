#pragma once

#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <string>
#include <optional>



class Program{
    public:
    
        virtual ~Program() = default;

        virtual void call(sf::RenderWindow &window, const std::optional<sf::Event>& event, Program *&currentProgram) = 0;
        virtual const std::string& getName() const = 0;
        virtual void end(Program *&currentProgram) = 0;
};  