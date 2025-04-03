//
// Created by Niklas on 26/03/2025.
//
#include <assert.h>
#include <stdio.h>
#include "queue.h"
#include "queue.c"

int main() {
    int v;
    queue_init();


    assert(queue_empty());
    assert(!queue_get(&v));


    assert(queue_put(1));
    assert(!queue_empty());
    assert(queue_get(&v) && v == 1);
    assert(queue_empty());


    assert(queue_put(1));
    assert(queue_put(2));
    assert(queue_put(3));
    assert(!queue_empty());
    assert(queue_get(&v) && v == 1);
    assert(queue_get(&v) && v == 2);
    assert(queue_get(&v) && v == 3);
    assert(queue_empty());


    for (int i = 0; i < QUEUE_MAX_SIZE; ++i) {
        assert(queue_put(i));
    }
    assert(!queue_put(QUEUE_MAX_SIZE));


    for (int i = 0; i < QUEUE_MAX_SIZE / 2; ++i) {
        assert(queue_get(&v) && v == i);
    }
    for (int i = QUEUE_MAX_SIZE; i < QUEUE_MAX_SIZE + QUEUE_MAX_SIZE / 2; ++i) {
        assert(queue_put(i));
    }
    for (int i = QUEUE_MAX_SIZE / 2; i < QUEUE_MAX_SIZE + QUEUE_MAX_SIZE / 2; ++i) {
        assert(queue_get(&v) && v == i);
    }
    assert(queue_empty());

    printf("All tests passed!\n");

    return 0;
}