package main

import "bufio"
import "math"
import "os"
import "strconv"

var in = bufio.NewScanner(os.Stdin)
var out = bufio.NewWriterSize(os.Stdout, 300000)

func init() {
	in.Split(bufio.ScanWords)
	buf := make([]byte, 300000, 300000)
	in.Buffer(buf, 0)
}

func readInt() int {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())
	return n
}

func main() {
	var ac [2]int
	n := readInt()
	m := readInt()

	for i := 0; i < n; i++ {
		a := readInt()

		if a == -1 {
			ac[0]++
		} else {
			ac[1]++
		}
	}

	min := math.Min(float64(ac[0]), float64(ac[1]))

	for i := 0; i < m; i++ {
		l := readInt()
		r := readInt()
		len := r - l + 1

		if len%2 == 0 && len/2 <= int(min) {
			out.WriteString("1\n")
		} else {
			out.WriteString("0\n")
		}
	}

	out.Flush()
}
