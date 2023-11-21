package main

import "fmt"

func findTheDifference(s string, t string) byte {
    charCount := make(map[byte]int)
    for _, char := range s {
        charCount[byte(char)]++
    }
    for _, char := range t {
        charCount[byte(char)]--
    }
    for char, count := range charCount {
        if count == -1 {
            return byte(char)
        }
    }
    return 0
}