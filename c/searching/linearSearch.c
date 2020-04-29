#include <stdio.h>

int linearSearch(int arr[], int val, int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == val) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[10] = {132, 12, 123, 1213, 122, 355, 1232, 541, 981, 908};
    int elem, index;

    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("element to be found in array: ");
    scanf("%d", &elem);
    index = linearSearch(arr, elem, size);

    if (index == -1) {
        printf("Element not found in the array.");
    } else {
        printf("Element found at index %d", index);
    }

    return 0;
}