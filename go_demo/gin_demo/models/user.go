package models

import (
	"time"

	"gorm.io/gorm"
)

type User struct {
	gorm.Model
	Username string `gorm:"unique"`
	Password string
}

type ExchangeRate struct {
	ID           uint      `gorm:"primarykey" json:"_id"`
	FromCurrency string    `json:"fromCurrency" binding:"required"`
	ToCurrency   string    `json:"toCurrency" binding:"required"`
	Rate         float64   `json:"rate" binding:"required"`
	Date         time.Time `json:"date"`
}

type Article struct {
	gorm.Model
	Title string `binding:"required"`
	Content string `binding:"required"`
	Preview string `binding:"required"`
	Likes int `gorm:"default:0"`
}
