//
// Created by Niklas on 26/03/2025.
//
#include <assert.h>
#include "queue.h"
int main()
{
    int v;
    queue_init();
    assert(queue_empty());
    assert(queue_put(1));
    assert(queue_put(2));
    assert(!queue_empty());
    assert(queue_get(&v) && v == 1);
    assert(queue_get(&v) && v == 2);
    assert(queue_empty());
    return 0;
}