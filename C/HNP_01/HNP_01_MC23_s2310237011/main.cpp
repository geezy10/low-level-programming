//
// Created by Niklas on 3/04/2025.
//
#include <cassert>
#include <cstdio>

#include "queue.h"
int main() {
    Queue<int> q;
    int v;


    assert(q.empty());
    assert(!q.get(v));


    q.put(1);
    assert(!q.empty());
    assert(q.get(v) && v == 1);
    assert(q.empty());


    q.put(1);
    q.put(2);
    q.put(3);
    assert(!q.empty());
    assert(q.get(v) && v == 1);
    assert(q.get(v) && v == 2);
    assert(q.get(v) && v == 3);
    assert(q.empty());


    for (int i = 0; i < 16; ++i) {
        assert(q.put(i));
    }
    assert(!q.put(16));


    for (int i = 0; i < 8; ++i) {
        assert(q.get(v) && v == i);
    }
    for (int i = 16; i < 24; ++i) {
        assert(q.put(i));
    }
    for (int i = 8; i < 24; ++i) {
        assert(q.get(v) && v == i);
    }
    assert(q.empty());

    printf("All tests passed!\n");

    return 0;
}