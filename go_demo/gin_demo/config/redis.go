package config

import (
	"context"
	"gin_demo/global"
	"log"

	"github.com/redis/go-redis/v9"
)

func initRedis() {
	RedisClient := redis.NewClient(&redis.Options{
		Addr:     "localhost:6379",
		DB:       0,
		Password: "",
	})
	ctx := context.Background()
	_, err := RedisClient.Ping(ctx).Result()
	if err != nil {
		log.Fatalf("failed to connect to redis got error %v", err.Error())
	}

	global.RedisDB = RedisClient
}
