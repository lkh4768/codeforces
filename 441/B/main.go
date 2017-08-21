package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

var in = bufio.NewScanner(os.Stdin)
var ab [3001]int

func init() {
	in.Split(bufio.ScanWords)
}

func main() {
	n, v := readInt(), readInt()

	for i := 0; i < n; i++ {
		a, b := readInt(), readInt()
		ab[a-1] += b
	}

	remain, col := 0, 0
	for i := 0; i < 3001; i++ {
		col += int(math.Min(float64(v), float64(remain+ab[i])))
		remain = int(math.Max(float64(ab[i])-math.Max(float64(v-remain), 0), 0))
	}

	fmt.Printf("%d\n", col)
}

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}
