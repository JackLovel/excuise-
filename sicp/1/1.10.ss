;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |1.10|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
(define (A x y)
  (cond ((= y 0) 0)
        ((= x 0) 2)
        ((= y 1) 2)
        (else (A (- x 1)
                 (A x (- y 1))))))

;;(A 1 10) ;; 2
;;(A 2 4)  ;; 2
;;(A 3 3)  ;; 2