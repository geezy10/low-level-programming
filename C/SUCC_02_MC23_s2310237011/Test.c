#include <assert.h>
#include "List.h"
#include "List.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    int id;
    int age;
    char* name;
    void (*print)(struct Person* this);
};

typedef struct Person Person;

void printPerson(Person* this) {
    printf("%d %d %s\n", this->id, this->age, this->name);
}
void print_listp(List *l) {
    Node *current = l->head;
    while (current != NULL) {
        Person *p = (Person *)current->value;
        p->print(p);
        current = current->next;
    }
    printf("\n");
}

int compare(void* a, void* b) {
    Person* p1 = (Person*)a;
    Person* p2 = (Person*)b;
    return strcmp(p1->name, p2->name); // Sort by name in ascending order
}

int main(void) {
    // Create a list
    List* list = malloc(sizeof(List));
    init(list);
    printf("Initialized list. Size: %d\n", size(list));
    assert(size(list) == 0);

    // Create a person
    Person* p1 = malloc(sizeof(Person));
    p1->id = 101;
    p1->age = 20;
    p1->name = "John";
    p1->print = printPerson;
    p1->print(p1);

    // Add person to the list
    push_back(list, p1);
    printf("Added person 1. Size: %d\n", size(list));
    assert(size(list) == 1);
    assert(((Person*)back(list))->id == 101);

    // Create another person
    Person* p2 = malloc(sizeof(Person));
    p2->id = 102;
    p2->age = 25;
    p2->name = "Jane";
    p2->print = printPerson;
    p2->print(p2);


    // Add another person to the list
    push_back(list, p2);
    printf("Added person 2. Size: %d\n", size(list));
    assert(size(list) == 2);
    assert(((Person*)back(list))->id == 102);


    printf("\nPrinting list:\n");
    print_listp(list);

    sort(list, compare);

    print_listp(list);


    // Test pop_back
    pop_back(list);
    printf("Popped back. Size: %d\n", size(list));
    assert(size(list) == 1);
    assert(((Person*)back(list))->id == 101);

    // Test pop_front
    pop_front(list);
    printf("Popped front. Size: %d\n", size(list));
    assert(size(list) == 0);


    // Clean up
    free(p1);
    free(p2);
    free(list);

    printf("All tests passed!\n");
    return 0;
}