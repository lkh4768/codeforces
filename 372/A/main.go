package main

import "bufio"
import "fmt"
import "os"
import "sort"
import "strconv"

var in = bufio.NewScanner(os.Stdin)

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}

func main() {
	cnt := 0
	n := readInt()
	ss := make([]int, n)

	for i := 0; i < n; i++ {
		ss[i] = readInt()
	}

	sort.Ints(ss)

	for i, j := 0, (n+1)/2; i < n/2 && j < n; j++ {
		if ss[i] * 2 <= ss[j] {
			cnt++
			i++
		}
	}

	fmt.Printf("%d\n", n - cnt)
}
