(cons 1 '(2 3))
(define x (cons 1 '(2 3)))
(car x)

(define (make-rat n d) (cons n '(d)))
(define (number x) (car x))
(define (denom x) (cdr x))
