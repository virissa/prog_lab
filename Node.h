//
// Created by rubik on 25.02.2022.
//

#ifndef CPP_NODE_H
#define CPP_NODE_H


class Node {
private:
    int data;
    Node* before;
public:
    Node(int data);
    void addNeighbour(Node* neighbour);
    int getData();
    Node* getNeighbour();
};


#endif //CPP_NODE_H
