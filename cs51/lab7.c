#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
    int num;
    struct node* next;
} nodeType;


int main() {
    nodeType *first = NULL;
    nodeType *temp = NULL;
    nodeType *p = NULL;
    int val;
    printf("Enter a number: ");
    scanf("%d", &val);
    while (val != -1) {
        temp = (nodeType*)malloc(sizeof(nodeType));
        temp -> num = val;
        temp -> next = NULL;

    if (first == NULL) {
        first = temp;
    } else {
        p = first;
        while (p->next != NULL) {
            p = p->next; 
        }
        p -> next = temp;
    }

    printf("Enter a number: ");
    scanf("%d", &val);
    }
    p = first;
    printf("Here are the numbers you want to enter:\n");
    printf("%d\t", p -> num);
    while (p -> next != NULL) {
        p = p -> next;
        printf("%d\t", p -> num);
    }

    printf("\nAuthor: Gabriel Carrera Rosas");

    return 0;
}