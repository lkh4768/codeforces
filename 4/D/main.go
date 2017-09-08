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

type Matrix [5010][3]int

func (m Matrix) Len() int { return len(m) }
func (m Matrix) Less(i, j int) bool {
	for x := range m[i] {
		if m[i][x] == m[j][x] {
			continue
		}
		return m[i][x] < m[j][x]
	}
	return false
}

func (m *Matrix) Swap(i, j int) { m[i], m[j] = m[j], m[i] }

func main() {
	var dp [5010][5010]int
	var e [5010][3]int
	maxSum, maxIdx := -1, -1
	n, w, h := readInt(), readInt(), readInt()

	for i := 0; i < n; i++ {
		e[i][0], e[i][1], e[i][2] = readInt(), readInt(), i
	}

	m := Matrix(e)
	sort.Sort(&m)

	for i := 0; i < n; i++ {
		if m[i][0] > w && m[i][1] > h {
			for j := i + 1; j < n; j++ {
				if m[j][0] > m[i][0] && m[j][1] > m[i][1] {
					dp[i][j] = 1
				}
			}
		}
	}

	for i := 0; i < n; i++ {
		fmt.Printf("i: %d |", i)
		for j := 0; j < n; j++ {
			fmt.Printf("%d ", dp[i][j])
		}
		fmt.Println("")
	}

	for i := 0; i < n; i++ {
		sum := 0
		for j := 0; j < n; j++ {
			if dp[j][i] == 1 {
				sum++
			}
		}

		if maxSum < sum {
			maxSum = sum
			maxIdx = i
		}

		fmt.Printf("maxSum(%d), maxIdx(%d)\n", maxSum, maxIdx)
	}

	fmt.Printf("%d\n", maxSum+1)
	for i := 0; i < n; i++ {
		if dp[i][maxIdx] == 1 {
			fmt.Printf("%d ", i)
		}
	}
	fmt.Printf("%d\n", maxIdx)
}

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}
