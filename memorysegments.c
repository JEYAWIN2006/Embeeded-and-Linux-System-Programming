#include <stdio.h>
#include <stdlib.h>
int glo = 10;
int unglo;
int product() {
    printf("\nThe product");
    return 6 * 7;
}
int main() {
    int stvar = 5;
    int *p;
    p = (int *)malloc(sizeof(int));
    *p = 20;
    printf("Data in Heap Memory: %d", *p);
    printf("\nAddress of data in Heap Memory: %p", p);
    printf("\nData in Stack Memory: %d", stvar);
    printf("\nAddress of data in Stack Memory: %p", &stvar);
    printf("\nUninitialized global data: %d", unglo);
    printf("\nUninitialized global memory address: %p", &unglo);
    printf("\nInitialized global data: %d", glo);
    printf("\nInitialized global memory address: %p", &glo);
    printf("\nCode Segment data: %d", product());
    printf("\nCode Segment address: %p", &product);
    free(p);
    return 0;
}
