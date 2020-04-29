#include <iostream>
using namespace std;

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
    cout << "element to be found in array: ";
    cin >> elem;

    int index = binarySearch(arr, elem, 0, endIndex);

    (index == -1) ? cout << "Element not found in the array." << endl : cout << "Element found at index " << index << endl;

    return 0;
}