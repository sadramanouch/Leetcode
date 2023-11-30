package main

import (
	"fmt"
	"math"
)

func minSubArrayLen(target int, nums []int) int {
	if len(nums) == 0 {
		return 0
	}
	minLen := math.MaxInt32
	sum := 0
	left, right := 0, 0
	for right < len(nums) {
		sum += nums[right]
		for sum >= target {
			minLen = min(minLen, right-left+1)
			sum -= nums[left]
			left++
		}
		right++
	}
	if minLen == math.MaxInt32 {
		return 0
	}
	return minLen
}