#include <iostream>
using namespace std;

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
    
    cout << "element to be found in array: ";
    cin >> elem;
    index = linearSearch(arr, elem, size);

    if (index == -1) {
        cout << "Element not found in the array." << endl;
    } else {
        cout << "Element found at index " << index << endl;
    }

    return 0;
}