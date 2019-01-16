;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-intermediate-lambda-reader.ss" "lang")((modname |1.2|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(define (sum x y)
  (+ x y))

(define (Min x y)
  (cond ((< x y)  x)
  (else y)))

(define (min-three x y z)
  (Min (Min x y) (Min x z)))

(define (sum-three x y z)
  (+ z (sum x y)))

(define (sum-of-max x y z)
  (- (sum-three x y z) (min-three x y z)))

(sum-of-max 5 2 4) ;; 9
(sum-of-max 1 2 3) ;; 5
(sum-of-max 4 3 2) ;; 6
