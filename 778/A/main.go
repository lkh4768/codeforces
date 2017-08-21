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
	buf := make([]byte, 2500000, 2500000)
	in.Buffer(buf, 0)
}

func readLineints(n int) []int {
	ns := make([]int, n)
	for i := 0; i < n; i++ {
		in.Scan()
		n, _ := strconv.Atoi(in.Text())
		ns[n-1] = i
	}
	return ns
}

func readLineBytes() []byte {
	in.Scan()
	return in.Bytes()
}

func main() {
	t := readLineBytes()
	p := readLineBytes()
	var tLen, pLen int = len(t), len(p)
	as := readLineints(tLen)

	var l, r int = 0, tLen
	for r-l > 1 {
		x := (r + l) / 2
		j := 0
		for i := 0; i < tLen; i++ {
			if t[i] == p[j] && x <= as[i] {
				j++
			}

			if j == pLen {
				break
			}
		}

		if j == pLen {
			l = x
		} else {
			r = x
		}
	}

	fmt.Printf("%d\n", l)
}
