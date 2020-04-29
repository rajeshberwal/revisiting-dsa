#include <stdio.h>

int binarySearch(int arr[], int val, int startIndex, int endIndex) {
    while (startIndex <= endIndex) {
        int mid = (startIndex + endIndex) / 2;

        if (arr[mid] == val) {
            return mid;
        } else if (arr[mid] < val) {
            startIndex = mid + 1;
        } else {
            endIndex = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[5] = {12, 15, 34, 65 ,78};
    int endIndex = sizeof(arr)/sizeof(arr[0]) - 1;
    
    int elem;
    printf("element to be found in array: ");
    scanf("%d", &elem);

    int index = binarySearch(arr, elem, 0, endIndex);

    (index == -1) ? printf("Element not found in the array.") : printf("Element found at index %d", index);

    return 0;
}