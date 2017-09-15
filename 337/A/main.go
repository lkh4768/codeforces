package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

var in = bufio.NewScanner(os.Stdin)

func init() {
	in.Split(bufio.ScanWords)
}

func main() {
	n, m := readInt(), readInt()
	fs := make([]int, m)
	for i := 0; i < m; i++ {
		fs[i] = readInt()
	}

	sort.Ints(fs)

	min := 1000
	for i := 0; i <= m-n; i++ {
		if min > fs[i+n-1]-fs[i] {
			min = fs[i+n-1] - fs[i]
		}
	}
	fmt.Println(min)
}

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}
