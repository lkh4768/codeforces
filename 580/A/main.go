package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var in = bufio.NewScanner(os.Stdin)

func init() {
	in.Split(bufio.ScanWords)
}

func main() {
	n, preA, max, nonDecreasing := readInt(), readInt(), 1, 1
	for i := 1; i < n; i++ {
		a := readInt()
		if preA <= a {
			nonDecreasing++
			if max < nonDecreasing {
				max = nonDecreasing
			}
		} else {
			nonDecreasing = 1
		}
		preA = a
	}

	fmt.Println(max)
}

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}
