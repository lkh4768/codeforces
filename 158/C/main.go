package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

const PWD, PRE_MAKR, SEP_MARK string = "pwd", "..", "/"

var in = bufio.NewScanner(os.Stdin)

func main() {
	in.Scan()
	n, _ := strconv.Atoi(in.Text())

	curPath := make([]string, 1, 200)
	curPath[0] = ""

	for i := 0; i < n; i++ {
		in.Scan()
		cmd := in.Text()
		if cmd == PWD {
			printPath(curPath)
		} else {
			cdPath := cmd[3:len(cmd)]
			path := strings.Split(cdPath, SEP_MARK)
			for j := 0; j < len(path); j++ {
				if path[j] == "" {
					curPath = path[0:1]
				} else if path[j] == PRE_MAKR {
					curPath = curPath[0 : len(curPath)-1]
				} else {
					curPath = append(curPath, path[j])
				}
			}
		}
	}
}

func printPath(path []string) {
	len := len(path)
	for i := 0; i < len; i++ {
		fmt.Printf("%s%s", path[i], SEP_MARK)
	}
	fmt.Printf("\n")
}
