(point)
;; Elisp: Simple Emacs Lisp Examples
;; url: http://ergoemacs.org/emacs/elisp_examples.html

(defun insert-p-tag ()
  "insert <p></p> at cursor point"
  (interactive)
  (insert "<p></p>")
  (backward-char 4))

(defun wrap-markup-region ()
  "insert a markup <b></b> around a region"
  (interactive)
  (save-excursion
    (goto-char (region-end))
    (insert "</b>")
       (goto-char (region-beginning))
       (insert "<b>")))

(region-beginning)(point)
(region-end)
(point-min)
(goto-char 524)
(point-max)(point)
(forward-char 9);2344444444444444444
(backward-char 9)
(search-forward "cat") ;; cat 
(search-backward "cat") ;; cat

(insert "sun and moon")

(delete-char 9) ; 111111111111
(delete-region 1 2)
(delete-and-extract-region 1 2)

(length "abc")
; 提取字符
(substring "abc" 0 2)
(concat "some" "thing")
(string-match "t" "cat")

(match-string 1 "this is a car.")

(replace-regexp-in-string "ee" "e4444444e4" "eeee33")

(split-string "xy_007_cat" "_")

(string-to-number "3")
(number-to-string 3)
(format "%d" 3)

;; trim string
(require 'subr-x)
(string-trim " abc ")
