package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func numbers(s string) []int {
	var n []int
	for _, f := range strings.Fields(s) {
		i, err := strconv.Atoi(f)
		if err == nil {
			n = append(n, i)
		}
	}
	return n
}

func main() {
	var as []int
	var rmove int

	reader := bufio.NewReader(os.Stdin)
	t, _ := reader.ReadString('\n')
	p, _ := reader.ReadString('\n')
	tLen := len(t)

	ass, _ := reader.ReadString('\n')
	as = numbers(ass)

	r := make([]byte, tLen, tLen)
	isStop := false
	for i := tLen - 1; i >= 0; i-- {
		r[as[i]-1] = t[as[i]-1]
		rmove++
		fmt.Printf("i: %d, p: %s, as[i]-1: %d, r: %s, rlen: %d, rmove: %d\n", i, string(p), as[i]-1, r, len(r), rmove)
		j := 0
		isStop = false
		for i := 0; i < tLen; i++ {
			if p[j] == r[i] {
				j++
			}

			if j == len(p) {
				isStop = true
				break
			}
		}

		if isStop {
			break
		}
	}

	fmt.Printf("%d\n", tLen-rmove)
}
