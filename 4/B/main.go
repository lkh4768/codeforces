package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var in = bufio.NewScanner(os.Stdin)
var t [31][2]int
var rets [31]int

func init() {
	in.Split(bufio.ScanWords)
}

func main() {
	d, st := readInt(), readInt()

	ret := 0
	for i := 0; i < d; i++ {
		t[i][0], t[i][1] = readInt(), readInt()
		ret += t[i][0]
		rets[i] = t[i][0]
	}

	for i := 0; i < d; i++ {
		if st-ret > t[i][1]-rets[i] {
			ret += t[i][1] - rets[i]
			rets[i] = t[i][1]
		} else {
			if rets[i]+st-ret <= t[i][1] && rets[i]+st-ret >= t[i][0] {
				rets[i] += st - ret
				ret = st
			}
			break
		}
	}

	if ret == st {
		fmt.Println("YES")
		for i := 0; i < d; i++ {
			fmt.Printf("%d ", rets[i])
		}
		fmt.Printf("\n")
	} else {
		fmt.Println("NO")
	}
}

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}
