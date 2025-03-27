//
// Created by Niklas on 26/03/2025.
//
#include "queue.h"
int head;
int tail;
int queue[QUEUE_MAX_SIZE];
int size = 0;

void queue_init() {
  head = 0;
  tail = 0;
  for (int i = 0; i < QUEUE_MAX_SIZE; i++) {
    queue[i] = 0;
  }
  return;
 }


int queue_put(int v) {
  if(head >= 0 && size <= QUEUE_MAX_SIZE)
    queue[head] = v;
    head++; size++;
    return 1;
  }




int queue_get(int* v) {
  if (tail >= 0 && tail < QUEUE_MAX_SIZE) {
    *v

}
int queue_empty() { /* your implementation */}