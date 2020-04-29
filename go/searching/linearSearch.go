// LinearSearch ALgorithm is used to search data sequentially
// Checkout full article at https://rajeshberwal.com

package main

import "fmt"

func linearSearch(mySlice []int, elem int) int {
	for idx, item := range mySlice {
		if item == elem {
			return idx
		}
	}
	return -1
}

func main() {
	dataSlice := []int{54, 234, 267, 315, 345, 421, 561}
	index := linearSearch(dataSlice, 267)

	if index == -1 {
		fmt.Println("Element not found")
	} else {
		fmt.Printf("Element found at index: %v", index)
	}
}
