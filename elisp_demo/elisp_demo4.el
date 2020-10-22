;; 返回当前的buffer 
(buffer-name)

;; 返回文件的绝对路径
(buffer-file-name)

;; create buffer 
(setq myStr "big text")
(with-temp-buffer
  (insert myStr)
  (message "%s" (buffer-string)))


(setq newBufName " xyz")
(setq newBuf (generate-new-buffer newBufName))
(set-buffer newBuf)

(find-file "./elisp_demo.el")

;; write file
;; write whole buffer to a file. overwrites the file content
(write-region (point-min) (point-max) "./text.txt")

(append-to-file 1 4 "./test.txt")

;; create new file
;; if file is not exist
(find-file "./test2.txt")

;; temp file write
(with-temp-file "test3.txt"
  (insert "hello"))
