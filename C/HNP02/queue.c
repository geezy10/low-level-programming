//
// Created by Niklas on 26/03/2025.
//
#include "queue.h"

#include <assert.h>
int head;
int tail;
int queue[QUEUE_MAX_SIZE];
int size;

void queue_init() {
  head = 0;
  tail = 0;
  size = 0;
  for (int i = 0; i < QUEUE_MAX_SIZE; i++) {
    queue[i] = 0;
  }
 }


int queue_put(int v) {
  if(head >= 0 && size <= QUEUE_MAX_SIZE){
    queue[tail] = v;
  tail = (tail + 1) % QUEUE_MAX_SIZE;
  size++;
    return 1;
  }
  return 0;
  }




int queue_get(int* v) {
  if (head >= 0 && tail < QUEUE_MAX_SIZE) {
    *v = queue[head];
    head = (head + 1) % QUEUE_MAX_SIZE;
    size--;
    return 1;
  }
  return 0;
}



int queue_empty() {
  if (head == tail && size == 0) {
    return 1;
    } else {
      return 0;
}
}
