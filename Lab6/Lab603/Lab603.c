#include <stdio.h>

#define SIZE 3

int main() {
    int data[SIZE];
    int *ptr;
    int i;

    printf("Enter %d integer elements for the array:\n", SIZE);
    for(i = 0 ; i < SIZE ; i++) {
        printf("Element %d: ", i);
        scanf("%d", &data[i]);
    }

    printf("\n--- ARRAY AND POINTER REPORT ---\n");
    printf("Index | Value (Direct | Value (via Pointer) | Address\n");
    printf("-------------------------------------------\n");

    for(i = 0 ; i < SIZE ; i++) {
        printf("%5d | %14d | %19d | %p\n",
            i,
            data[i],
            *(data + i),
            (void*)(data + i)
        );
    }

    return 0;
}