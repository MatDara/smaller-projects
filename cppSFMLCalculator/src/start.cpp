#include "start.h"
#include <iostream>
#include <SFML/Graphics.hpp>

namespace {
    sf::Font font("../../fonts/Swansea-q3pd.ttf");
}

void Start::call(sf::RenderWindow &window, const std::optional<sf::Event>& event) {

    if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->scancode == sf::Keyboard::Scancode::Up){
                    moveIndex(-1);
                }    
                if (keyPressed->scancode == sf::Keyboard::Scancode::Down){
                    moveIndex(1);
                }
                
            }
            else if (const auto* mouseWheelScrolled = event->getIf<sf::Event::MouseWheelScrolled>()){
                moveIndex(mouseWheelScrolled->delta);
            }

    sf::Text text(font);

    text.setString(std::to_string(index_));

    window.draw(text);
}

const std::string& Start::getName() const{
    return defaultLine;
}


void Start::drawWindow(){
    
}

void Start::moveIndex(int direction){
    switch(direction){
        case 1:
            index_--;
            break;
        case -1:
            index_++;
            break;
    }
    if(index_ >= programs_.size()){
        index_ = programs_.size() - 1;
    }
    if (index_ < 0){
        index_ = 0;   
    }

}
void Start::selectProgram(){

}
void Start::addProgram(std::string &program){

}