#include <iostream>
#include <SFML/Graphics.hpp>
#include "Header/grid.h"

int main() {
    const int rows = 20;
    const int cols = 30;
    const float nodeSize = 30.0f;
    sf::RenderWindow window(sf::VideoMode(cols * nodeSize, rows * nodeSize), "Pathfinding Visualizer");
    Grid grid(rows, cols, nodeSize);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                grid.handleClick(mousePos.x, mousePos.y, WALL);
            }
        }

        window.clear(sf::Color::White);
        grid.draw(window);
        window.display();
    }
    return 0;
}