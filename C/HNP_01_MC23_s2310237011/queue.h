//
// Created by Niklas on 26/03/2025.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <stddef.h>
template <class T, size_t size = 16> class Queue {
public:
Queue() : head(0), tail(0) { /* your implementation */ }
bool put(const T& t) { /* your implementation */ }
bool get(T& t) { /* your implementation */ }
bool empty() { /* your implementation */ }
private:
size_t head;
size_t tail;
T buffer[size];
};

#endif //QUEUE_H
