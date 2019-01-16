;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-intermediate-lambda-reader.ss" "lang")((modname |1.4|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(define (a-plus-plus a b)
  ((if (> b 0) + -) a b))

;; when b < 0, return - 
(a-plus-plus 5 -1)  ;; 6

;; when b > 0, return +
(a-plus-plus 5 1)   ;; 6