;; buffer string
(buffer-substring-no-properties  4 6)

;; get text selection 
(buffer-substring-no-properties (region-beginning) (region-end))

;; get current word
(current-word)

(current-word t t)

(defun my-get-word()
  "print the word under cursor. word here is any A to Z, a to z, and low line _"
  (interactive)
  (let (p1 p2)
    (case-fold-search t))
  (save-excursion
    (skip-chars-backward "_a-z0-9")
    (setq p1 (point))
    (skip-chars-forward "_a-z0-9")
    (setq p2 (point))
    (message "%s" (buffer-substring-no-properties p1 p2))))


