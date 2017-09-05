package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

var in = bufio.NewScanner(os.Stdin)
var t, d [4010]int
var f [4010][4010]int
var n, k, max int

func init() {
	in.Split(bufio.ScanWords)
}

func main() {
	n, k = readInt(), readInt()

	for i := 1; i <= n; i++ {
		t[i], d[i] = readInt(), readInt()
	}

	for i := 0; i <= n; i++ {
		f[0][i] = 1
	}

	t[n+1] = 86401

	for i := 1; i <= n; i++ {
		for j := 0; j <= n; j++ {
			f[i][j] = int(math.Max(float64(f[i-1][j]), float64(t[i]))) + d[i]
			if j != 0 {
				f[i][j] = int(math.Min(float64(f[i][j]), float64(f[i-1][j-1])))
			}
		}
	}

	for i := 1; i <= n+1; i++ {
		max = int(math.Max(float64(max), float64(t[i]-f[i-1][k])))
	}

	fmt.Printf("%d\n", max)
}

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}
