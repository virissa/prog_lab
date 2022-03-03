//
// Created by rubik on 25.02.2022.
//

#include "Node.h"

Node::Node(int data) {
    this->data = data;
    before = nullptr;
}

void Node::addNeighbour(Node *neighbour) {
    before = neighbour;
}

int Node::getData() {
    return data;
}

Node *Node::getNeighbour() {
    return before;
}
