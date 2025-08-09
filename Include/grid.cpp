//
// Created by Dhruv Dagar on 07/08/2025.
//

#include "Header/grid.h"
Grid::Grid(int rows, int cols, float nodeSize)
        : rows(rows), cols(cols), nodeSize(nodeSize) {
    nodes.resize(rows, std::vector<Node>(cols, Node(0, 0, nodeSize)));
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            nodes[r][c] = Node(r, c, nodeSize);
        }
    }
}

void Grid::draw(sf::RenderWindow& window) {
    for (auto& row : nodes) {
        for (auto& node : row) {
            node.draw(window);
        }
    }
}

void Grid::handleClick(float mouseX, float mouseY, NodeType type) {
    int col = mouseX / nodeSize;
    int row = mouseY / nodeSize;
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        nodes[row][col].setType(type);
    }
}
