function linearSearch(arr, val) {
    for(var i = 0; i < arr.length; i++) {
        if (arr[i] == val) {
            return i
        }
    }
    return -1
}

myArr = [12, 223, 121, 432, 12, 45];

index = linearSearch(myArr, 432)

if (index == -1) {
    console.log("Element not found in array")
} else {
    console.log(`element found at index ${index}`)
}