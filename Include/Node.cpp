//
// Created by Dhruv Dagar on 09/08/2025.
//

#include "Header/Node.h"
#include <SFML/Graphics.hpp>

Node::Node(int row, int col, float size) : row(row), col(col), type(EMPTY) {
    shape.setSize(sf::Vector2f(size - 1, size - 1)); // -1 for grid lines
    shape.setPosition(col * size, row * size);
    shape.setFillColor(sf::Color::White);
}

void Node::draw(sf::RenderWindow& window) {
    window.draw(shape);
}

void Node::setType(NodeType newType) {
    type = newType;
    switch (type) {
        case EMPTY:
            shape.setFillColor(sf::Color::White);
            break;
        case WALL:
            shape.setFillColor(sf::Color::Black);
            break;
        case START:
            shape.setFillColor(sf::Color::Green);
            break;
        case END:
            shape.setFillColor(sf::Color::Red);
            break;
    }
}

NodeType Node::getType() const {
    return type;
}
