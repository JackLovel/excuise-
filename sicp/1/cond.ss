;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-intermediate-lambda-reader.ss" "lang")((modname cond) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(define (Abs x)
  (cond ((> x 0) x)
        ((= x 0) 0)
        ((< x 0) (- x))))

(define (Abs2 x)
  (cond ((< x 0) (- x))
        (else x)))

(define (Abs3 x)
  (if (< x 0)
      (- x)
      x))

(Abs3 -7)

;; or and
(define (>=1 x y)
  (or (> x y) (= x y)))

(define (<1 x y)
  (not (< x y)))



