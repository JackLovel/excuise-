package controllers

import (
	"gin_demo/global"
	"net/http"

	"github.com/gin-gonic/gin"
	"github.com/redis/go-redis/v9"
)

func LinkArticle(ctx *gin.Context) {
	articleID := ctx.Param("id")
	likeKey := "article:" + articleID + ":likes"
	if err := global.RedisDB.Incr(ctx, likeKey).Err(); err != nil {
		ctx.JSON(http.StatusInternalServerError, gin.H{"error": err.Error()})
		return
	}
	ctx.JSON(http.StatusOK, gin.H{"message": "like add success"})
}

func GetArticleLinks(ctx *gin.Context) {
	articleID := ctx.Param("id")
	likeKey := "article:" + articleID + ":likes"
	likes, err := global.RedisDB.Get(ctx, likeKey).Result()
	if err == redis.Nil {
		likes = "0"
	} else if err != nil {
		ctx.JSON(http.StatusInternalServerError, gin.H{"error": err.Error()})
		return
	}
	ctx.JSON(http.StatusOK, gin.H{"likes": likes})
}
