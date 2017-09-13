package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

var in = bufio.NewScanner(os.Stdin)

var n, w, h, max, maxi, elen int
var e [5001][3]int
var dep [5001]int
var prev [5001]int
var ret [5001]int

type Matrix [5001][3]int

func init() {
	in.Split(bufio.ScanWords)
	for i := range dep {
		dep[i] = 1
	}

	for i := range prev {
		prev[i] = -1
	}
}

func (m Matrix) Len() int           { return elen }
func (m Matrix) Less(i, j int) bool { return m[i][0] < m[j][0] }
func (m *Matrix) Swap(i, j int)     { m[i], m[j] = m[j], m[i] }

func main() {
	n, w, h = readInt(), readInt(), readInt()

	for i := 0; i < n; i++ {
		tw, th := readInt(), readInt()
		if tw > w && th > h {
			e[i][0], e[i][1], e[i][2] = tw, th, i
			elen++
		}
	}

	if elen == 0 {
		fmt.Println("0")
		return
	}

	m := Matrix(e)
	sort.Sort(&m)

	for i := 1; i < elen; i++ {
		for j := 0; j < i; j++ {
			if m[i][0] > m[j][0] && m[i][1] > m[j][1] && dep[i] < dep[j]+1 {
				dep[i] = dep[j] + 1
				prev[i] = j
			}
		}
	}

	for i := 0; i < elen; i++ {
		if max < dep[i] {
			max = dep[i]
			maxi = i
		}
	}

	i := maxi
	j := 0
	for {
		ret[j] = m[i][2]
		i = prev[i]
		if i == -1 {
			break
		}
		j++
	}

	fmt.Printf("%d\n", max)
	for i := j; i >= 0; i-- {
		fmt.Printf("%d ", ret[i])
	}
}

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}
