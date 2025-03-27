//
// Created by Niklas on 17/03/2025.
//


#include <stddef.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include "IntList.h"

#include <stdbool.h>
#include <stdio.h>


// creation
// initializes a newly created list
void init(IntList *l) {
    l->head = NULL;
    l->tail = NULL;
    l->nOfElements = 0;
}


// returns the number of elements
int size(IntList *l) {
    if (l != NULL) {
        return l->nOfElements;
    } else {
        return INT_MAX;
    }
}

// checks whether the list is empty
int empty(IntList *l) {
    if (l != NULL && l->head != NULL) {
        return false;
    } else
        return true;
}

// modifiers
void clear(IntList *l) {
    Node *current = l->head;

    while (current != NULL) {
        Node *next = current->next;
        free(current);
        current = next;
    }
    l->head = NULL;
    l->tail = NULL;
    l->nOfElements = 0;
}

// adds an element to the end
void push_back(IntList *l, int value) {
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    node->prev = NULL;

    if (l->head == NULL) {
        l->head = node;
        l->tail = node;
        l->nOfElements++;
    } else {
        l->tail->next = node;
        node->prev = l->tail;
        l->tail = node;
        l->nOfElements++;
    }
}

// removes the last element
void pop_back(IntList *l) {
    if (l->head != NULL) {
        if (l->head == l->tail) {
            free(l->tail);
            l->nOfElements--;
        } else {
            Node *current = l->tail->prev;
            l->tail->prev = NULL;
            l->tail = current;
            l->tail->next = NULL;
            l->nOfElements--;

        }
    }
}


// inserts an element to the beginning
void push_front(IntList *l, int value) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    node->prev = NULL;

    if (l->head == NULL) {
        l->head = node;
        l->tail = node;
        l->nOfElements++;
    } else {
        l->head->prev = node;
        node->next = l->head;
        l->head = node;
        l->nOfElements++;
    }
}

// removes the first element
void pop_front(IntList *l) {
    if (l->head != NULL) {
        Node *temp = l->head;
        l->head = l->head->next;

        if (l->head == NULL) {
            l->tail = NULL;
        } else {
            l->head->prev = NULL;
        }

        free(temp);
        l->nOfElements--;
    }
}


// sorts the elements
void sort(IntList *l) {
    if (l->head == NULL || l->head == l->tail) {
        return;
    }
    Node *first = l->head;
    Node *sec = l->head->next;

    if (first->value > sec->value) {
        first->next = sec->next;
        if (sec->next != NULL) {
            sec->next->prev = first;
        }


        sec->prev = NULL;
        sec->next = first;
        first->prev = sec;
        l->head = sec;

        if (l->tail == sec) {
            l->tail = first;
        }
    }
}

// element access
// access the first element
int front(IntList *l) {
    if (l->head != NULL) {
        return l->head->value;
    }
    return INT_MAX;
}


// access the last element
int back(IntList *l) {
    if (l->head != NULL) {
        return l->tail->value;
    }
    return INT_MAX;
}

// Function to print the list
void print_list(IntList *l) {
    Node *current = l->head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}




