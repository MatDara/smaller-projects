#pragma once

#include "program.h"

class HelloWorld : public Program{
    private:
        const std::string name = "Hello World";
    public:
        void call(sf::RenderWindow &window, const std::optional<sf::Event>& event,  Program *&currentProgram) override;
        const std::string& getName() const override { return name; }
        void end(Program *&currentProgram) override { currentProgram = nullptr; }
};  