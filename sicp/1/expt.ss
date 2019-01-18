;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname expt) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
(define (Expt b n)
  (if (= n 0)
      1
      (* b (Expt b (- n 1)))))

(Expt 2 1)
(Expt 2 2)
(Expt 2 3)  

;; way2: iter version
(define (Expt2 b n)
  (expt-iter b n 1))

(define (expt-iter b counter product)
  (if (= counter 0)
      product
      (expt-iter b
                 (- counter 1)
                 (* b product))))

(Expt2 2 4)


;; way3
(define (square n)
  (* n n))

(define (fast-expt b n)
  (cond ((= n 0) 1)
        ((is-even n) (square (fast-expt b (/ n 2))))
        (else (* b (fast-expt b (- n 1))))))

;; if num is even return true
;; else return false 
(define (is-even n)
  (= (remainder n 2) 0))

