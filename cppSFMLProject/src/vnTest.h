#pragma once

#include <string>

#include "program.h"

class VNTest : public Program {
    public:
        void call(sf::RenderWindow &window, const std::optional<sf::Event>& event, Program *&currentProgram) override;
        const std::string& getName() const override { return name; }
        void end(Program *&currentProgram) override;

        VNTest(): currentLine(0), dataPath("../vnData/data.txt") {}
        VNTest(int currLine): currentLine(currentLine), dataPath("../vnData/data.txt") {}
        VNTest(std::string path): currentLine(0), dataPath(std::move(path)) {}
        VNTest(int currLine, std::string path): currentLine(currLine), dataPath(std::move(path)) {}

        ~VNTest();

        enum class State {
            Menu,
            Game,
            Settings
        };

        void setState(State s) {this->state = s;}
        State getState() const { return this->state;}

        void initialize();

        void menu();
        
    private:
        const std::string name = "VNTest";
        int currentLine;
        std::string dataPath;
        bool initialized = false;
        sf::RenderWindow* window = nullptr;
        const std::optional<sf::Event>* event = nullptr;
        State state = State::Menu;
};