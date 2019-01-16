;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-intermediate-lambda-reader.ss" "lang")((modname |1.5|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
;; dead loop
(define (p) (p))

(define (test x y)
  (if (= x 0)
      0
      y))

;; if x = 0, then result is 0
;; otherwise enter a dead loop
(test 0 (p))