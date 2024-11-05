package main

import "fmt"

func combinationSum(candidates []int, target int) [][]int {
	var result [][]int
	backtrack(&result, []int{}, 0, candidates, target)
	return result
}

func backtrack(result *[][]int, current []int, start int, candidates []int, target int) {
	if target == 0 {
		temp := make([]int, len(current))
		copy(temp, current)
		*result = append(*result, temp)
		return
	}

	// target < 0, not found need to be return
	if target < 0 {
		return
	}

	// explore all possibility and options using backtrack for each candidates
	for i := start; i < len(candidates); i++ {
		current = append(current, candidates[i])
		backtrack(result, current, i, candidates, target-candidates[i])
		current = current[:len(current)-1]
	}
}

func main() {
	fmt.Println("39. Combination Sum")

	candidates := []int{2, 3, 6, 7}
	target := 7

	fmt.Println("#TestCases 1: ", combinationSum(candidates, target))

	candidates = []int{2, 3, 5}
	target = 8

	fmt.Println("#TestCases 2: ", combinationSum(candidates, target))

	candidates = []int{2}
	target = 1

	fmt.Println("#TestCases 3: ", combinationSum(candidates, target))
}
