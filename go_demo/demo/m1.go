package main

import "fmt"

func main() {
    cannel := make(chan int, 1)
    cannel <- 114
    x := <- cannel
    fmt.Println(x)
}
