#include "start.h"
#include <iostream>
#include <SFML/Graphics.hpp>

namespace {
    sf::Font font("../../fonts/Swansea-q3pd.ttf");
}

std::vector<Program*> Start::programs_;

void Start::call(sf::RenderWindow &window, const std::optional<sf::Event>& event,  Program *&currentProgram) {

    if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if(keyPressed->scancode == sf::Keyboard::Scancode::Space){
                    if(index_ == programs_.size()){
                        std::cout << "Exit Program\n";
                    }
                    else{
                        std::cout << programs_.at(index_)->getName() << std::endl;
                    }
                }

                if(keyPressed->scancode == sf::Keyboard::Scancode::Escape){
                    Start::end(currentProgram);
                }

                if(keyPressed->scancode == sf::Keyboard::Scancode::Enter){
                    if(index_ == programs_.size()){
                        Start::end(currentProgram);
                    }
                    else{
                        currentProgram = programs_.at(index_);
                    }
                }

                if (keyPressed->scancode == sf::Keyboard::Scancode::Up){
                    moveIndex(-3);
                }    
                if (keyPressed->scancode == sf::Keyboard::Scancode::Down){
                    moveIndex(3);
                }
                if (keyPressed->scancode == sf::Keyboard::Scancode::Right){
                    moveIndex(-1);
                }    
                if (keyPressed->scancode == sf::Keyboard::Scancode::Left){
                    moveIndex(1);
                }
                
            }
            else if (const auto* mouseWheelScrolled = event->getIf<sf::Event::MouseWheelScrolled>()){
                moveIndex(mouseWheelScrolled->delta);
            }

    sf::Text text(font);

    text.setString(std::to_string(index_)); // debug

    window.draw(text);
}


void Start::drawWindow(){
    int layer = 0;
    for(int i = 0; i <= programs_.size(); i++){
        if(i == programs_.size()){
            // draw "end program" option
            switch (i % 3)
            {
            case 0:
                // draw left

                break;
            
            case 1:
                // draw middle
                break;
            
            case 2:
                // draw right
                
                layer++;
                break;
            }
        }

        switch (i % 3)
        {
        case 0:
            // draw 
            break;
        
        case 1:
            
            break;

        
        case 2:
            
            layer++;
            break;
        }
    }
}

void Start::moveIndex(int direction){
    switch(direction){
        case 1:
            index_--;
            break;
        case -1:
            index_++;
            break;
        case 3:
            index_+= 3;
            break;
        case -3:
            index_-= 3;
            break;
    }
    if(index_ > programs_.size()){ // only bigger because the end is outside of programs_
        index_ = programs_.size();
    }
    if (index_ < 0){
        index_ = 0;   
    }

}

void Start::end(Program *&currentProgram){
    currentProgram = nullptr;
}