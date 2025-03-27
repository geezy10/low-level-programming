//
// Created by Niklas on 26/03/2025.
//

#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_MAX_SIZE 16
void queue_init();
int queue_put(int v);
int queue_get(int* v);
int queue_empty();
#endif //QUEUE_H
