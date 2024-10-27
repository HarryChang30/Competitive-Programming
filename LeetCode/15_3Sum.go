package main

import (
	"fmt"
	"sort"
)

func threeSum(nums []int) [][]int {
	sort.Ints(nums)
	var res [][]int

	for i := 0; i < len(nums)-2; i++ {
		if i > 0 && nums[i] == nums[i-1] {
			continue // skip duplicates
		}

		left, right := i+1, len(nums)-1
		for left < right {
			sum := nums[i] + nums[left] + nums[right]

			if sum == 0 {
				res = append(res, []int{nums[i], nums[left], nums[right]})

				// Move left and right to avoid duplicates
				for left < right && nums[left] == nums[left+1] {
					left++
				}
				for left < right && nums[right] == nums[right-1] {
					right--
				}

				left++
				right--
			} else if sum < 0 {
				left++
			} else {
				right--
			}
		}
	}

	return res
}

func main() {
	fmt.Println("3Sum Problems")

	// 1 Test Cases
	// Input : nums = [-1,0,1,2,-1,-4]
	// Output : [[-1,-1,2],[-1,0,1]]

	tc1 := []int{-1, 0, 1, 2, -1, 4}
	res1 := threeSum(tc1)

	fmt.Println("Result TC1: ", res1)

	// 2 Test Cases
	// Input : [0,1,1]
	// Output : []
	tc2 := []int{0, 1, 1}
	res2 := threeSum(tc2)

	fmt.Println("Result TC2: ", res2)

	// 3 Test Cases
	// Input : [0,0,0]
	// Output : [[0,0,0]]
	tc3 := []int{0, 0, 0}
	res3 := threeSum(tc3)

	fmt.Println("Result TC3: ", res3)
}
