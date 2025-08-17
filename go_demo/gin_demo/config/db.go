package config

import (
	"gin_demo/global"
	"log"
	"time"

	"gorm.io/driver/postgres"
	"gorm.io/gorm"
)

func initDb() {
    dsn := AppConfig.Database.Dsn
    db, err := gorm.Open(postgres.Open(dsn), &gorm.Config{})
    if err != nil {
        log.Fatalf("failed to connect database")
    }

    sqlDB, err := db.DB()
    sqlDB.SetMaxIdleConns(AppConfig.Database.MaxIdleConns)
    sqlDB.SetMaxOpenConns(AppConfig.Database.MaxOpenConns)
    sqlDB.SetConnMaxLifetime(time.Hour)
    if err != nil {
        log.Fatalf("failed to config database")
    }
    global.Db = db
}
