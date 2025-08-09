//
// Created by Dhruv Dagar on 07/08/2025.
//

#ifndef PATHFINDERVISUAL_GRID_H
#define PATHFINDERVISUAL_GRID_H
#include <vector>
#include "Header/Node.h"

class Grid {
public:
    Grid(int rown, int cols,float nodeSize);
    void draw(sf::RenderWindow& window);
    void handleClick(float mouseX,float  mouseY,NodeType type);

private:
    int rows;
    int cols;
    float nodeSize;
    std::vector<std::vector<Node>> nodes;


};


#endif //PATHFINDERVISUAL_GRID_H
