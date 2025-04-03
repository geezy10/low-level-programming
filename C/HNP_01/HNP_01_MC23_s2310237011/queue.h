//
// Created by Niklas on 3/04/2025.
//

#ifndef QUEUE_H
#define QUEUE_H
#include <stddef.h>


template <class T, size_t size = 16> class Queue {

public:
    Queue() : head(0), tail(0), count(0) {
    }


    bool put(const T& t) {
      if(size == count) {
        return false;
       } else {
         buffer[tail] = t;
         tail = (tail+1)%size;
         count++;
         return true;
         }
    }

    bool get(T& t) {
      if(count == 0) {
        return false;
        } else {
          t = buffer[head];
            head = (head+1)%size;
            count--;
            return true;
            }
    }

    bool empty() {
      if (count == 0) {
        return true;
        } else {
          return false;
          }

    }




private:
    size_t head;
    size_t tail;
    size_t count;
    T buffer[size];
};
#endif //QUEUE_H
