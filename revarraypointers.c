#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;   // Pointer to the array
    int temp;

    // Reverse the array using pointer
    for (int i = 0; i < size / 2; i++) {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + size - i - 1);
        *(ptr + size - i - 1) = temp;
    }

    // Print the reversed array
    printf("Reversed array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}

