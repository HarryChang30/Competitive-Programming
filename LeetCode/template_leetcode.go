package main

import "fmt"

// Two pointers: one input, opposite ends
// func find(arr []int) int {
// 	low, high := 0, len(arr)-1
// 	ans := 0
// 	condition := 100

// 	for low < high {
// 		// do some logic here with left and right
// 		if condition < 5000 {
// 			low = low + 1
// 		} else {
// 			high = high - 1
// 		}
// 	}

// 	return ans
// }

// Two pointers: two inputs, exhausts both
// func find(arr1, arr2 []int) int {
// 	i, j, ans := 0, 0, 0
// 	condition := 1000

// 	for i < len(arr1) && j < len(arr2) {
// 		// do some logic here
// 		if condition < 5000 {
// 			i = i + 1
// 		} else {
// 			j = j + 1
// 		}
// 	}

// 	for i < len(arr1) {
// 		// do logic here
// 		i = i + 1
// 	}

// 	for j < len(arr2) {
// 		// do logic here
// 		j = j + 1
// 	}

// 	return ans
// }

// Sliding window
// func sliding(arr []int) int {
// 	left, ans, curr := 0, 0, 0

// 	for right := 0; right < len(arr); right++ {

// 		// while window condition broken
// 		for curr < 10 {
// 			curr = curr + 1
// 			left = left + 1
// 		}

// 		// update ans
// 		ans = 1
// 	}

// 	return ans
// }

// Build a prefix sum
// func prefixSum(arr []int) []int {
// 	var prefix []int = make([]int, len(arr))
// 	prefix[0] = arr[0]

// 	for i := 1; i < len(arr); i++ {
// 		prefix[i] = prefix[i-1] + prefix[i]
// 	}

// 	return prefix
// }

// Efficient string building
// func builder(arr []rune) string {
// 	var buffer strings.Builder
// 	for _, c := range arr {
// 		buffer.WriteRune(c)
// 	}

// 	return buffer.String()
// }

// Linked List: fast and slow pointer
// type ListNode struct {
// 	Val  int
// 	Next *ListNode
// }

// func fn(head *ListNode) int {
// 	slow := head
// 	fast := head
// 	ans := 0

// 	for fast != nil && fast.Next != nil {
// 		// do logic
// 		slow = slow.Next
// 		fast = fast.Next.Next
// 	}

// 	return ans
// }

// Reversing a LinkedList
// type ListNode struct {
// 	Val  int
// 	Next *ListNode
// }

// func fn(head *ListNode) *ListNode {
// 	curr := head
// 	var prev *ListNode
// 	for curr != nil {
// 		nextNode := curr.Next
// 		curr.Next = prev
// 		prev = curr
// 		curr = nextNode
// 	}

// 	return prev
// }

// Find number of subarrays that fit an exact criteria
// func fn(arr []int, k int) int {
// 	counts := make(map[int]int)
// 	counts[0] = 1
// 	ans := 0
// 	curr := 0

// 	for _, num := range arr {
// 		// do logic to change curr

// 		fmt.Println(num)

// 		ans += counts[curr-k]
// 		counts[curr]++
// 	}

// 	return ans
// }

// Monotonic increasing stack
// func fn(arr []int) int {
// 	stack := make([]int, 0)
// 	ans := 0

// 	for _, num := range arr {
// 		for len(stack) > 0 && stack[len(stack)-1] > num {
// 			// do logic
// 			stack = stack[:len(stack)-1]
// 		}

// 		stack = append(stack, num)
// 	}

// 	return ans
// }

// DFS Recursive
// type TreeNode struct {
// 	Val   int
// 	Left  *TreeNode
// 	Right *TreeNode
// }

// func dfs(root *TreeNode) int {
// 	if root == nil {
// 		return 0
// 	}

// 	ans := 0
// 	// do logic
// 	dfs(root.Left)
// 	dfs(root.Right)
// 	return ans
// }

// DFS using Stack implementation
// type TreeNode struct {
// 	Val   int
// 	Left  *TreeNode
// 	Right *TreeNode
// }

// func dfs(root *TreeNode) int {
// 	stack := make([]*TreeNode, 0)
// 	stack = append(stack, root)
// 	ans := 0

// 	for len(stack) > 0 {
// 		node := stack[len(stack)-1]
// 		stack = stack[:len(stack)-1]

// 		// do logic
// 		if node.Left != nil {
// 			stack = append(stack, node.Left)
// 		}
// 		if node.Right != nil {
// 			stack = append(stack, node.Right)
// 		}
// 	}

// 	return ans
// }

// BFS Implementation using Queue
// type TreeNode struct {
// 	Val   int
// 	Left  *TreeNode
// 	Right *TreeNode
// }

// func fn(root *TreeNode) int {
// 	queue := []*TreeNode{root}
// 	ans := 0

// 	for len(queue) > 0 {
// 		currentLength := len(queue)
// 		// do logic for current level

// 		for i := 0; i < currentLength; i++ {
// 			node := queue[0]
// 			queue = queue[1:]
// 			// do logic
// 			if node.Left != nil {
// 				queue = append(queue, node.Left)
// 			}
// 			if node.Right != nil {
// 				queue = append(queue, node.Right)
// 			}
// 		}
// 	}

// 	return ans
// }

// Graph DFS (Recursive)
// For the graph templates, assume the nodes are numbered from 0 to n - 1 and the graph is given as an adjacency list. Depending on the problem, you may need to convert the input into an equivalent adjacency list before using the templates.
// var seen map[int]bool
// var START_NODE int

// func fn(graph [][]int) int {
// 	seen = make(map[int]bool)
// 	seen[START_NODE] = true
// 	return dfs(START_NODE, graph)
// }

// func dfs(node int, graph [][]int) int {
// 	ans := 0
// 	// do some logic
// 	for _, neighbor := range graph[node] {
// 		if !seen[neighbor] {
// 			seen[neighbor] = true
// 			ans += dfs(neighbor, graph)
// 		}
// 	}

// 	return ans
// }

// Graph DFS using Stack
// var START_NODE int
// func fn(graph [][]int) int {
// 	stack := make([]int, 0)
// 	seen := make(map[int]bool)
// 	stack = append(stack, START_NODE)
// 	seen[START_NODE] = true
// 	var ans int

// 	for len(stack) > 0 {
// 		node := stack[len(stack)-1]
// 		stack = stack[:len(stack)-1]
// 		// do some logic
// 		for _, neighbor := range graph[node] {
// 			if !seen[neighbor] {
// 				seen[neighbor] = true
// 				stack = append(stack, neighbor)
// 			}
// 		}
// 	}

// 	return ans
// }

// Graph BFS using Queue
// var START_NODE int
// func fn(graph [][]int) int {
// 	queue := make([]int, 0)
// 	seen := make(map[int]bool)
// 	queue = append(queue, START_NODE)
// 	seen[START_NODE] = true
// 	ans := 0

// 	for len(queue) > 0 {
// 		node := queue[0]
// 		queue = queue[1:]
// 		// do some logic
// 		for _, neighbor := range graph[node] {
// 			if !seen[neighbor] {
// 				seen[neighbor] = true
// 				queue = append(queue, neighbor)
// 			}
// 		}
// 	}

// 	return ans
// }

// Find top k elements with Heap / PriorityQueue
// type intHeap []int

// func (h intHeap) Len() int {
// 	return len(h)
// }

// func (h intHeap) Less(i, j int) bool {
// 	return h[i] < h[j]
// }

// func (h intHeap) Swap(i, j int) {
// 	h[i], h[j] = h[j], h[i]
// }

// func (h *intHeap) Push(x interface{}) {
// 	*h = append(*h, x.(int))
// }

// func (h *intHeap) Pop() interface{} {
// 	n := len(*h)
// 	x := (*h)[n-1]
// 	*h = (*h)[:n-1]
// 	return x
// }

// func findKLargest(arr []int, k int) []int {
// 	h := &intHeap{}
// 	heap.Init(h)

// 	for _, num := range arr {
// 		heap.Push(h, num)
// 		if h.Len() > k {
// 			heap.Pop(h)
// 		}
// 	}

// 	ans := make([]int, k)
// 	for i := k - 1; i >= 0; i-- {
// 		ans[i] = heap.Pop(h).(int)
// 	}

// 	return ans
// }

// Binary Search
// func fn(arr []int, target int) int {
// 	left := 0
// 	right := len(arr) - 1
// 	for left <= right {
// 		mid := left + (right-left)/2
// 		if arr[mid] == target {
// 			// do something
// 			return mid
// 		}
// 		if arr[mid] > target {
// 			right = mid - 1
// 		} else {
// 			left = mid + 1
// 		}
// 	}
// 	// left is the insertion point
// 	return left
// }

// Binary search: duplicate elements, left most insertion points
// func fn(arr []int, target int) int {
// 	left := 0
// 	right := len(arr)
// 	for left < right {
// 		mid := left + (right-left)/2
// 		if arr[mid] >= target {
// 			right = mid
// 		} else {
// 			left = mid + 1
// 		}
// 	}

// 	return left
// }

// Binary seach: duplicate elements, right most insertion points
// func fn(arr []int, target int) int {
// 	left := 0
// 	right := len(arr)
// 	for left < right {
// 		mid := left + (right-left)/2
// 		if arr[mid] > target {
// 			right = mid
// 		} else {
// 			left = mid + 1
// 		}
// 	}

// 	return left
// }

// Binary search: Greedy problem, looking for minimum value
// var BOOLEAN bool
// var MINIMUM_POSSIBLE_ANSWER int
// var MAXIMUM_POSSIBLE_ANSWER int

// func fn(arr []int) int {
// 	left := MINIMUM_POSSIBLE_ANSWER
// 	right := MAXIMUM_POSSIBLE_ANSWER
// 	for left <= right {
// 		mid := left + (right-left)/2
// 		if check(mid) {
// 			right = mid - 1
// 		} else {
// 			left = mid + 1
// 		}
// 	}
// 	return left
// }

// func check(x int) bool {
// 	// this function is implemented depending on the problem
// 	return BOOLEAN
// }

// Binary search: Greedy problem, looking for maximum value
// var BOOLEAN bool
// var MINIMUM_POSSIBLE_ANSWER int
// var MAXIMUM_POSSIBLE_ANSWER int

// func fn(arr []int) int {
// 	left := MINIMUM_POSSIBLE_ANSWER
// 	right := MAXIMUM_POSSIBLE_ANSWER
// 	for left <= right {
// 		mid := left + (right-left)/2
// 		if check(mid) {
// 			left = mid + 1
// 		} else {
// 			right = mid - 1
// 		}
// 	}
// 	return left
// }

// func check(x int) bool {
// 	// this function is implemented depending on the problem
// 	return BOOLEAN
// }

// Backtracking
// func backtrack(curr STATE, otherArguments ...interface{}) int {
// 	if BASE_CASE {
// 		// modify the answer
// 		return 0
// 	}

// 	ans := 0
// 	for _, input := range ITERATE_OVER_INPUT {
// 		// modify the current state
// 		ans += backtrack(curr, otherArguments...)
// 		// undo the modification of the current state
// 	}

// 	return ans
// }

// DP: Top-down memoization
// var memo = make(map[STATE]int)
// func fn(arr []int) int {
// 	return dp(STATE_FOR_WHOLE_INPUT, arr)
// }

// func dp(STATE []int, arr []int) int {
// 	if BASE_CASE {
// 		return 0
// 	}

// 	if ans, ok := memo[STATE]; ok {
// 		return ans
// 	}

// 	ans := RECURRENCE_RELATION(STATE)
// 	memo[STATE] = ans
// 	return ans
// }

// Build a Trie
// type TrieNode struct {
// 	data     int
// 	children map[rune]*TrieNode
// }

// func NewTrieNode() *TrieNode {
// 	return &TrieNode{
// 		children: make(map[rune]*TrieNode),
// 	}
// }

// func BuildTrie(words []string) *TrieNode {
// 	root := NewTrieNode()
// 	for _, word := range words {
// 		curr := root
// 		for _, c := range word {
// 			child, ok := curr.children[c]
// 			if !ok {
// 				child = NewTrieNode()
// 				curr.children[c] = child
// 			}

// 			curr = child
// 		}

// 		// at this point, you have a full word at curr
// 		// you can perform more logic here to give curr an attribute if you want
// 	}

// 	return root
// }

func main() {
	fmt.Println("Curated List of Snippet Code LC or Hackerrank in Go")
}
