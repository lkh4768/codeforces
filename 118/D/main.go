package main

import "fmt"

var n1, n2, k1, k2 int
var line [101][101][11][11]int

func init() {
	for a, line1 := range line {
		for b, line2 := range line1 {
			for c, line3 := range line2 {
				for d, _ := range line3 {
					line[a][b][c][d] = -1
				}
			}
		}
	}
}

func lineup(n3 int, n4 int, k3 int, k4 int) int {
	if n3 < 0 || n4 < 0 || k3 > k1 || k4 > k2 {
		return 0
	}

	if n3 == 0 && n4 == 0 {
		return 1
	}

	if line[n3][n4][k3][k4] != -1 {
		return line[n3][n4][k3][k4]
	}

	line[n3][n4][k3][k4] = ((lineup(n3-1, n4, k3+1, 0) + lineup(n3, n4-1, 0, k4+1)) % 100000000)
	return line[n3][n4][k3][k4]
}

func main() {
	fmt.Scanf("%d %d %d %d", &n1, &n2, &k1, &k2)
	fmt.Printf("%d\n", lineup(n1, n2, 0, 0))
}
