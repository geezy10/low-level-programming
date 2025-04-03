//
// Created by Niklas on 17/03/2025.
//
#include "IntList.h"
#include "Intlist.c"
#include <stdio.h>

int main(void) {
        IntList list;
        init(&list);

        push_front(&list, 10);
        push_front(&list, 20);
        push_front(&list, 30);
        print_list(&list);


        push_back(&list, 40);
        push_back(&list, 50);
        print_list(&list);

        printf("Front: %d\n", front(&list));
        printf("Back: %d\n", back(&list));

        printf("\nTeste pop_front:\n");
        pop_front(&list);
        print_list(&list);

        printf("\nTeste pop_back:\n");
        pop_back(&list);
        print_list(&list);

        printf("\nTeste size und empty:\n");
        printf("Size: %d\n", size(&list));
        printf("Empty: %s\n", empty(&list) ? "true" : "false");

        printf("\nTeste sort:\n");
        push_front(&list, 25);
        push_front(&list, 5);
        push_front(&list, 15);
        print_list(&list);

        sort(&list);
        print_list(&list);

        clear(&list);
        print_list(&list);
        printf("Size nach clear: %d\n", size(&list));
        printf("Empty nach clear: %s\n", empty(&list) ? "true" : "false");  


        return 0;
    }