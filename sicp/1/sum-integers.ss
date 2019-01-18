;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname sum-integers) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
(define (cube x)
  (* x x x))

(define (sum-integers a b)
  (if (> a b)
      0
      (+ a (sum-integers (+ a 1) b))))

(define (sum-cubes a b)
  (if (> a b)
      0
      (+ (cube a) (sum-cubes (+ a 1) b))))

(define (pi-sum a b)
  (if (> a b)
      0
      (+ (/ 1.0 (* a (+ a 2))) (pi-sum (+ a 4) b))))


;; module
(define (sum term a next b)
  (if (> a b)
      0
      (+ (term a)
         (sum term (next a) next b))))

;; m1
(define (inc n)
  (+ n 1))

(define (sum-cubes2 a b)
  (sum cube a inc b))

(sum-cubes 1 10)

;; m2
(define (indentity x)
  x)

(define (sum-integers2 a b)
  (sum indentity a inc b))

(sum-integers2 1 10)

;; m3
(define (pi-sum2 a b) 
  (define (pi-term2 x)
    (/ 1.0 (* x (+ x 2))))
  (define (pi-next2 x)
    (+ x 4))
  (sum pi-term2 a pi-next2 b))
