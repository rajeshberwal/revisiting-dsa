function binarySearch(arr, val) {
    let startIndex = 0
    let endIndex = arr.length - 1

    while (startIndex <= endIndex) {
        let mid = Math.floor((startIndex + endIndex) / 2)
        if (arr[mid] == val) {
            return mid
        } else if (arr[mid] < val) {
            startIndex = mid - 1
        } else {
            endIndex = mid + 1
        }
    }
    return -1
}

let myArr = [12, 223, 121, 432, 12, 45];

let index = binarySearch(myArr, 432)

if (index == -1) {
    console.log("Element not found in array")
} else {
    console.log(`element found at index ${index}`)
}