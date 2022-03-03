//
// Created by rubik on 25.02.2022.
//

#include "Queue.h"

Queue::Queue() {
    size = 0;
    head = nullptr;
    tail = nullptr;
}

void Queue::addItem(int data) {
    if(head == nullptr) {
        head = new Node(data);
        tail = head;
        size++;
    } else {
        Node* temp = new Node(data);
        tail->addNeighbour(temp);
        tail = temp;
        size++;
    }
}

int Queue::getFirst() {
    int elem = head->getData();
    Node* temp = head->getNeighbour();
    delete head;
    head = temp;
    return elem;
}
