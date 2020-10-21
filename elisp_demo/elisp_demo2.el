(point)

(region-beginning)
(region-end)

(line-beginning-position)
(line-end-position)

(point-min)
(point-max)

(goto-char 39)

;; move cursor by 4 chars
(forward-char 4);234
(backward-char 4)

(search-forward "cursor") ;;  向后搜索cursor 
(search-backward "cursor") ;;

(re-search-forward "[0-9]") ;; 0
(re-search-backward "[0-9]") ;; 0

(skip-chars-forward "a-z") ;; 1
(skip-chars-backward "a-z") ;; ss

(delete-char 9);; 999999999
(delete-region 3 10)
(insert "i love cat")
;; get the string from pos 71 to 300
(setq x (buffer-substring 71 300))

;; 把一个区域内的字母变成大写
(capitalize-region 71 300)

(length "abc")
(substring "abcdef" 3 4)
;; 使用正则表达式进行替换 
(replace-regexp-in-string "[0-9]" "X" "abc123")

;; buffer
;; return the name current buffer
(buffer-name)

(buffer-file-name) ;; 返回当前文件的全部路径

(set-buffer "xyz")

(save-buffer);; 保存当前buffer 

;; 暂时设置当前buffer 
(with-current-buffer "xyz")

;; File
(open-file "~/")
(insert-file-contents "./elisp_demo.el")

(file-name-directory "./elisp_demo.el")

;; get filename's suffix 
(file-name-extension "./elisp_demo.el")

;;
(file-name-sans-extension "./elisp_demo.el")

;;
(defun insert-p-tag ()
  "insert <p></p> at cursor point"
  (interactive)
  (insert "<p></p>")
  (backward-char 4))

(insert-p-tag)

