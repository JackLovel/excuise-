;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |1.16|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
(define (square x)
  (* x x))

(define (Expt b n)
  (expt-iter b n 1))

;; b ^ count
(define (expt-iter b count product)
  (cond ((= count 0) product)
        ((even? count)
         (expt-iter (square b)
                    (/ count 2)
                    product))
        ((odd? count)
         (expt-iter b
                    (- count 1)
                    (* b product)))))

(Expt 2 0)
(Expt 2 5)