package main

import (
	"fmt"
)

func main() {
	var rmove int
	var t, p string

	fmt.Scan(&t, &p)

	tLen := len(t)

	as := make([]int, tLen, tLen)
	for i := 0; i < tLen; i++ {
		fmt.Scan(&as[i])
	}

	r := make([]byte, tLen, tLen)
	isStop := false
	for i := tLen - 1; i >= 0; i-- {
		//fmt.Printf("i: %d, p: %s, as[i]-1: %d, r: %s, rlen: %d, rmove: %d\n", i, string(p), as[i]-1, r, len(r), rmove)
		r[as[i]-1] = t[as[i]-1]
		rmove++
		k := 0
		isStop = false
		for j := 0; j < tLen; j++ {
			if p[k] == r[j] {
				k++
			}

			if k == len(p) {
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
