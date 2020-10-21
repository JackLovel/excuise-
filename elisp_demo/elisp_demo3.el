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

( transient-mark-mode 1)

(defun select-current-word()
  "select the word under cursor 

