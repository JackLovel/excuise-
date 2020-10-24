;; get user input

;; read file name demo 
(defun ff ()
  "prompt use to enter a file name, with completion and history support."
  (interactive)
  (message "string  is %s" (read-file-name "enter file name:")))

;; prompt for directory
(defun dd ()
  "prompt use to enter a dir path, with path completion and input history."
  (interactive)
  (message "path is %s" (read-directory-name "directory:")))

;; prompt for string  
(defun strstr ()
  "prompt use to enter a string, with input history."
  (interactive)
  (message "string is %s" (read-string "enter your name:")))

;; prompt for regex string  
(defun regexStr ()
  "prompt use to enter a elisp regex, with input history support."
  (interactive)
  (message "regex is %s" (read-regexp "enter your regex:")))

;; prompt from a List
(require 'ido)
(defun my-pick-one ()
  "prompt use to pick a choice from a list."
  (interactive)
  (let ((choices '("cat" "dog" "dragon" "tiger")))
    (message "%s" (ido-completing-read "open bookmark:" choices))))

;; query use for yes/no (y-or-n-p)
(if (y-or-n-p "do it?")
    (progn
      ;; code
      (message "%s" "o yeah")
      )
    (progn
      ;; code
      (message "%s" "no man")
      )
    )






