#pragma once

#include <string>
#include <vector>

#include "program.h"

class Start : public Program{
    private:
        const std::string name = "Start";
        static std::vector<Program*> programs_;
        int index_ = 0;

    public:
        void call(sf::RenderWindow &window, const std::optional<sf::Event>& event, Program *&currentProgram) override;
        const std::string& getName() const override { return name; }
        void end(Program *&currentProgram) override;

        void moveIndex(int direction);

        void drawWindow();

        static void addProgram(Program *program) {
            programs_.push_back(program);
        }
};