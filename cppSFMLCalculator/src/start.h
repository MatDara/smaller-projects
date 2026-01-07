#pragma once
#include <string>
#include <vector>
#include "program.h"

class Start : public Program{
    private:
        const std::string defaultLine = "Select a program ";
        static std::vector<Program> programs_;
        int index_ = 0;

    public:
        void call(sf::RenderWindow &window, const std::optional<sf::Event>& event) override;
        const std::string& getName() const override;

        void moveIndex(int direction);
        void selectProgram();

        void drawWindow();

        static void addProgram(std::vector<Program> program);
};