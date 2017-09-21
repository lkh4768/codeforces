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
	m, s := readInt(), readInt()

	if (m > 1 && s == 0) || m*9 < s {
		fmt.Println("-1 -1")
		return
	}

	max := make([]int, m)
	n := s
	for i := 0; i < m; i++ {
		if n > 9 {
			max[i] = 9
			n = n - 9
		} else {
			max[i] = n
			break
		}
	}

	min := make([]int, m)
	if max[m-1] == 0 && m > 1 {
		min[m-1] = 1
		n := s
		n--
		for i := 0; i < m-1; i++ {
			if n > 9 {
				min[i] = 9
				n = n - 9
			} else {
				min[i] = n
				break
			}
		}
	} else {
		copy(min, max)
	}

	for i := m - 1; i >= 0; i-- {
		fmt.Printf("%d", min[i])
	}
	fmt.Print(" ")
	for i := 0; i < m; i++ {
		fmt.Printf("%d", max[i])
	}
}

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}
