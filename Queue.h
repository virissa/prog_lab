//
// Created by rubik on 25.02.2022.
//

#ifndef CPP_QUEUE_H
#define CPP_QUEUE_H
#include "Node.h"

#include <cstddef>

class Queue {
private:
    size_t size;
    Node* head;
    Node* tail;

public:
    Queue();
    void addItem(int data);
    int getFirst();
    ~Queue();

};


#endif //CPP_QUEUE_H
