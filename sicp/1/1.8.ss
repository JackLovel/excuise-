;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-intermediate-lambda-reader.ss" "lang")((modname |1.8|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(define (Square x)
  (* x x))

(define (cube x)
  (* x x x))

(define (improve guess x)
  (/ (+ (/ x (Square guess)) (* 2 guess))
     3))

(define (cube-root x)
  (cube-root-iter 1.0 x))

(define (cube-root-iter guess x)
  (if (good-enough? guess x)
      guess
      (cube-root-iter (improve guess x)
                      x)))


(define (good-enough? guess x)
  (< (abs (- (cube guess) x)) 0.001))

(cube-root (* 3 3 3))
(cube-root (* 7 7 7))


