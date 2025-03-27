//
// Created by Niklas on 17/03/2025.
//


#include <stddef.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include "List.h"

#include <stdbool.h>
#include <stdio.h>


// creation
// initializes a newly created list
void init(List *l) {
    l->head = NULL;
    l->tail = NULL;
    l->nOfElements = 0;
}


// returns the number of elements
int size(List *l) {
    if (l != NULL) {
        return l->nOfElements;
    } else {
        return INT_MAX;
    }
}

// checks whether the list is empty
int empty(List *l) {
    if (l != NULL && l->head != NULL) {
        return false;
    } else
        return true;
}

// modifiers
void clear(List *l) {
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
void push_back(List *l, void* value) {
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
void pop_back(List *l) {
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
void push_front(List *l, void* value) {
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
void pop_front(List *l) {
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
void sort(List *l, int (*compare)(void*, void*)) {
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
void* front(List *l) {
    if (l->head != NULL) {
        return l->head->value;
    }
    return INT_MAX;
}


// access the last element
void* back(List *l) {
    if (l->head != NULL) {
        return l->tail->value;
    }
    return INT_MAX;
}






