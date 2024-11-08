#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int *a = (int * )malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        a[i] = (i * 5) + 3;
    }
    printf("Array Output #1\n");
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    int x = 6;
    int *ptr1 = &x;
    printf("\nVariable x = %d\n", x);
    printf("Variable ptr1 = %x\n", ptr1);
    // %d is for any numeric value, and %x is for an address

    printf("The address %x has the value %d\n", ptr1, *ptr1);
    printf("The address after %x is %x\n", ptr1, ptr1 + 1);
    
    int *ptr2 = a;
    printf("The array a starts at address %x\n\n", ptr2);

    printf("Array Output #2\n");
    for (;ptr2 <= &a[4]; ptr2++) {
        printf("Value at address %x = %d\n", ptr2, *ptr2);
    }
    ptr2 = a;
    // int = 32 bits
    printf("\nArray Output #3\n");
    for (int x = 0; x < 5; x++) {
        printf("a[%d] = %d\n", x, *(ptr2 + x));
    }
    ptr2 = &a[4];
    printf("\nArray Output #4\n");
    for (; ptr2 >= a; ptr2--) {
        printf("Value at address %x = %d\n", ptr2, *ptr2);
    }
    printf("\nAuthor: Gabriel Carrera Rosas");

    return 0;
}