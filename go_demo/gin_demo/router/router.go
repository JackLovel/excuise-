package router

import (
	"gin_demo/controllers"
	"gin_demo/middle"

	"github.com/gin-gonic/gin"
)
func SetupRouter() *gin.Engine {
    r := gin.Default()
    auth := r.Group("/api/auth")
    {
        auth.POST("/login", controllers.Login)
        auth.POST("/register", controllers.Register)
    }

    api := r.Group("/api")
    api.GET("/exchangeRates", controllers.GetExchangeRates)
    api.Use(middle.AuthMiddleWare())
    {
        api.POST("/exchangeRates", controllers.CreateExchangeRate)
    }
    return r
}
