package main

import (
	"fmt"
	"gin_demo/config"
)

func main() {
    config.InitConfig()
    fmt.Println(config.AppConfig.App.Port)
}
