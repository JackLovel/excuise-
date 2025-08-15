package main

import (
	"gin_demo/config"
	"gin_demo/router"
)

func main() {
	config.InitConfig()
    r := router.SetupRouter()
    r.Run(config.AppConfig.App.Port)
}
