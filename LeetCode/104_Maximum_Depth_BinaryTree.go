package main

import "fmt"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func maxDepth(root *TreeNode) int {
	if root == nil {
		return 0
	}

	queue := []*TreeNode{root}
	depth := 0

	for len(queue) > 0 {
		depth = depth + 1
		size := len(queue)

		for i := 0; i < size; i++ {
			current := queue[0]
			queue = queue[1:]

			if current.Left != nil {
				queue = append(queue, current.Left)
			}

			if current.Right != nil {
				queue = append(queue, current.Right)
			}
		}
	}

	return depth
}

func main() {
	fmt.Println("104. Maximum Depth of Binary Tree")

	root := TreeNode{Val: 3}
	root.Left = &TreeNode{Val: 9}
	root.Right = &TreeNode{Val: 20}
	root.Right.Left = &TreeNode{Val: 15}
	root.Right.Right = &TreeNode{Val: 7}

	max := maxDepth(&root)

	fmt.Println("Maximum Depth of Binary Tree TC1 : ", max)

	root2 := TreeNode{Val: 1}
	root2.Right = &TreeNode{Val: 2}

	max = maxDepth(&root2)

	fmt.Println("Maximum Depth of Binary Tree TC2 : ", max)
}
