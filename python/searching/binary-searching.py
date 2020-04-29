"""
Author: Rajesh Berwal
Date: 20-04-2020
Website: https://rajeshberwal.com/
"""
def binary_search(arr, start_index, end_index, elem):
    """
    @args: 
        arr -> array,
        start_index -> lowest-index : int 
        end_index -> highest-index : int,
        elem: element to be searched : any
    """
    while start_index <= end_index:
        mid = start_index + (end_index - start_index) // 2

        if arr[mid] == elem:
            return mid
        elif arr[mid] < elem:
            start_index = mid + 1
        else:
            end_index = mid - 1
    # if we didn't find anything then will return None
    return None

arr = [12, 24, 34, 110, 145, 240] # use dynamic array if you want
elem = int(input("elem: ")) # taking input from user

result = binary_search(arr, 0, len(arr) - 1, elem)

if result == None:
    print("element not found");
else:
    print(f"element found at index {result}")