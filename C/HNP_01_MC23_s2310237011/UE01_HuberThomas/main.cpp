#include <assert.h>
#include "queue.h"

int main() {
    Queue<int> q;
    int v;
    assert(q.empty());
    q.put(1);
    q.put(2);
    assert(!q.empty());
    assert(q.get(v) && v == 1);
    assert(!q.empty());
    assert(q.get(v) && v == 2);
    assert(q.empty());
    return 0;
}
