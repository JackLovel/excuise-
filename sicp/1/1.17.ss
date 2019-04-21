(define (even n)
  (= (remainder n 2) 0))

(define (odd n)
  (not (= (remainder n 2) 0)))

(define (double n) (+ n n))

(define (halve n) (/ n 2))

(define (multi a b)
  (cond ((= b 0)
         0)
         ((even b)
          (double (multi  a (halve b))))
         ((odd b)
          (+ a (multi a (- b 1))))))

(multi 3 2) ;; 6
(multi 3 3) ;; 9
(multi 4 2) ;; 8
(multi 4 3) ;; 12



