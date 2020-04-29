package main

import "fmt"

func BianrySearch(mySlice []int, elem int) int {
	startIndex := 0
	endIndex := len(mySlice) - 1
	for startIndex <= endIndex {
		mid := (endIndex + startIndex) / 2
		if mySlice[mid] < elem {
			startIndex = mid + 1
		} else {
			endIndex = mid - 1
		}
	}

	if startIndex == len(mySlice) || mySlice[startIndex] != elem {
		return -1
	} else {
		return startIndex
	}
}

func main() {
	elements := []int{54, 234, 267, 315, 345, 421, 561}
	index := BianrySearch(elements, 267)

	if index == -1 {
		fmt.Println("Element not found")
	} else {
		fmt.Printf("Element found at index: %v", index)
	}
}