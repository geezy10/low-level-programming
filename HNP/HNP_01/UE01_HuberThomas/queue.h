#ifndef QUEUE_H_
#define QUEUE_H_
#include <stddef.h>

template<class T, size_t size = 16>
class Queue {
public:
    Queue() : head(0), tail(0), count(0) {
        /* your implementation */
    }

    bool put(const T &t) {
        /* your implementation */
        if (count == size) {
            return false;
        }
        buffer[tail] = t;
        tail = (tail+1)%size;
        count++;
        return true;
    }

    bool get(T &t) {
        /* your implementation */
        if (count == 0) {
            return false;
        }
        t = buffer[head];
        head = (head+1)%size;
        count--;
        return true;
    }

    bool empty() {
        /* your implementation */
        return count == 0;
    }

private:
    size_t head;
    size_t tail;
    size_t count;
    T buffer[size];
};
#endif
