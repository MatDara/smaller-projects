#pragma once

#include <SFML/Graphics.hpp>

class SfmlButton {
public:
    SfmlButton(
        const sf::Vector2f& size,
        const sf::Vector2f& position,
        const sf::Font& font,
        const std::string& text
    );

    void handleEvent(const sf::Event& event, const sf::RenderWindow& window);
    void draw(sf::RenderWindow& window) const;

    bool isClicked() const;

private:
    sf::RectangleShape shape_;
    sf::Text text_;

    bool hovered_ = false;
    bool clicked_ = false;

    void centerText();
};
