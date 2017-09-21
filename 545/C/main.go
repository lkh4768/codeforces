package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var in = bufio.NewScanner(os.Stdin)
var n, max int

func init() {
	in.Split(bufio.ScanWords)
}

func main() {
	n = readInt()
	max = 1

	px, ph, pd := readInt(), readInt(), -1
	for i := 1; i < n; i++ {
		x, h := readInt(), readInt()
		if px+ph*pd >= x {
			pd = 0
		}
		if pd != 0 {
			max++
		}
		if px+ph*pd < x-h && px < x-h {
			px, ph, pd = x, h, -1
		} else {
			px, ph, pd = x, h, 1
		}
	}

	fmt.Println(max)
}

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}
