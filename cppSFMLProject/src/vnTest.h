#pragma once

#include <string>

#include "program.h"

class VNTest : public Program {
    private:
        const std::string name = "VNTest";
        int currentLine;
        std::string dataPath;
    public:
        void call(sf::RenderWindow &window, const std::optional<sf::Event>& event, Program *&currentProgram) override;
        const std::string& getName() const override { return name; }
        void end(Program *&currentProgram) override;

        VNTest(): currentLine(0), dataPath("../data/data.txt") {}
        VNTest(int currLine): currentLine(currentLine), dataPath("../data/data.txt") {}
        VNTest(std::string path): currentLine(0), dataPath(std::move(path)) {}
        VNTest(int currLine, std::string path): currentLine(currLine), dataPath(std::move(path)) {}

};