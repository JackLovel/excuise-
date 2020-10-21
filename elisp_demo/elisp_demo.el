;;JackLovel’s emacs config
(+ 3 2)

(- 3 2)

(message "你好")
(message "he age is: %d" 16)
(message "he name is: %s" "Vicky")
(message "my list is: %S" (list 2 3 8))

(integerp 3.)
(floatp 3)
(floatp 3.0)

(string-to-number "3")
(number-to-string 3)

(if nil "yes" "no") ; no
(if () "yes" "no") ; no
(if t "yes" "no") ; yes
(if 0 "yes" "no") ; yes

(and t nil) ; nil
(or t nil) ; t

(< 3 4) ; t
(/= 3 5) ; t

(equal "abc" "abc") ; t
(string-equal "abc" "abc") ; t 
(string-equal "abc" "Abc") ; t
(string-equal "abc" 'abc) ; t 

(equal 3 3)
(equal 3.0 3.0)
(equal '(3 4 5) '(3 4 5))

(equal "e" "e")

(eq "e" "e")

(not (= 3 4))
(/= 3 4)

;; global variables 
;;(setq x 1)
(setq a 3 b 2 c 7)

;; local variable
(let (a b)
  (setq a 3)
  (setq b 4)
  (+ a b)) ; 7

(let ((a 3) (b 4))
  (+ a b))

;; if-else
(if (< 3 2) 7 8) ; 8
(if (< 3 2) (message "yes")) ; nil 

;; block of expressions
;; 将许多的表达式 组合成 一个表达式
(progn (message "a") (message "b"))

(message "a")
(message "b")
(progn 3 4) ; 4, 返回最后一个值

;; loop
(setq x 0)
(while (< x 4)
  (print (format "number is %d" x))
  (setq x (+ 1 x)))

(let ((x 32))
  (while (< x 127)
    (insert-char x)
    (setq x (+ x 1))))

;; function 
(defun myFun ()
  "testing"
  (message "AMD YES"))

; call function
(myFun)

(defun yay ()
  "Insert yay! at cursor position."
  (interactive)
  (insert "yay!"))


