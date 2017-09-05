package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

var in = bufio.NewScanner(os.Stdin)

func init() {
	in.Split(bufio.ScanWords)
}

func main() {
	n := readInt()

	t := make([]int, n+1)
	for i := 0; i < n; i++ {
		t[i] = readInt()
	}

	max := -20000000
	for i := 1; i <= n/3; i++ {
		if n%i != 0 {
			continue
		}
		for j := 0; j < i; j++ {
			sum := 0
			for k := j; k < n; k += i {
				sum += t[k]
			}
			max = int(math.Max(float64(max), float64(sum)))
		}
	}

	fmt.Printf("%d\n", max)
}

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}
