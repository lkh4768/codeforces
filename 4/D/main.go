package main

import (
	"bufio"
	"os"
	"strconv"
)

var in = bufio.NewScanner(os.Stdin)

func init() {
	in.Split(bufio.ScanWords)
}

func main() {
	maxSum, maxIdx := -1, -1
	n, w, h := readInt(), readInt(), readInt()
	var e [5001][3]int

	for i := 0; i < n; i++ {
		e[i][0], e[i][1], e[i][2] = readInt(), readInt(), i
	}
}

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}
