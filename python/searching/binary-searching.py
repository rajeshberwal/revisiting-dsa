"""
Author: Rajesh Berwal
Date: 20-04-2020
Website: https://rajeshberwal.com/
"""
def binary_search(arr, low, high, elem):
    """
    @args: 
        arr -> array,
        low -> lowest-index : int 
        high -> highest-index : int,
        elem: element to be searched : any
    """
    while low <= high:
        mid = low + (high - low) // 2

        if arr[mid] == elem:
            return mid
        elif arr[mid] < elem:
            low = mid + 1
        else:
            high = mid - 1
    # if we didn't find anything then will return None
    return None

arr = [12, 24, 34, 110, 145, 240] # use dynamic array if you want
elem = int(input("elem: ")) # taking input from user

result = binary_search(arr, 0, len(arr) - 1, elem)

if result == None:
    print("element not found");
else:
    print(f"element found at index {result}")