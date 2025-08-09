//
// Created by Dhruv Dagar on 09/08/2025.
//

#ifndef PATHFINDERVISUAL_NODE_H
#define PATHFINDERVISUAL_NODE_H


#include <SFML/Graphics.hpp>

enum NodeType {
    EMPTY,
    WALL,
    START,
    END
};

class Node {
public:
    Node(int row, int col, float size);
    void draw(sf::RenderWindow& window);
    void setType(NodeType newType);
    NodeType getType() const;
    int row, col;
    sf::RectangleShape shape;

private:
    NodeType type;
};

#endif //PATHFINDERVISUAL_NODE_H
