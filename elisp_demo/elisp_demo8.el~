;; line function

;; 获得一行的最前面/最后面的位置
(line-beginning-position)
(line-end-position)

;; 移动游标(鼠标位置)到一行的最前面/最后面的位置
(beginning-of-line)
(end-of-line) ;; this is test

;; 移动游标到前面/后面一行
(forward-line -1) ;; prev line 
(forward-line 1) ;; next line 

;; 获取当前行作为字符串
(setq myLine
      (buffer-substring-no-properties
       (line-beginning-position)
       (line-end-position)))

;; read file  
(defun get-string-from-file (filePath)
  "return filepath's file content."
  (with-temp-buffer
    (insert-file-contents filePath)
    (buffer-string)))

(get-string-from-file "./test7.txt")

;; 
(defun read-lines  (filePath)
  (with-temp-buffer
    (insert-file-contents filePath)
    (split-string (buffer-string) "\n" t)))

(read-lines "./test7.txt")

