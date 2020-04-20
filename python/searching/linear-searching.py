"""
Author: Rajesh Berwal
Date: 20-04-2020
Website: https://rajeshberwal.com/
"""
def linear_search(arr, elem):
    """
        @params:
            arr -> array : array,
            elem: element to be searched: any
    """
    for i in range(len(arr)):
        if arr[i] == elem:
            return i
    # if it doesn't find anything then return None
    return None
arr = [13, 23, 12, 34, 13]
elem = int(input("element: "))

result = linear_search(arr, elem)

if result == None:
    print("element not found");
else:
    print(f"element found at index {result}")