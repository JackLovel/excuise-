(file-exists-p "./test6.txt")
(rename-file "./test.txt" "./test7.txt")

(directory-files ".")

(defun make-backup ()
  (interactive)
  (let ((fName (buffer-file-name))
	(if (not fName)
	    (error "current buffer is not a file.")
	  (progn
	    (setq backupName (concat fName "~"))
	    (while (file-exists-p backupName)
	      (setq backupName (concat backupName "~")))
	    (copy-file fName backupName t)
	    (message (concat "Backup save as: " (file-name-nondirectory backupName))))))))

;; file path function
;; 获取文件的目录
(file-name-directory "/home/gog/.bashrc") ;; /home/gog/
;; 获取文件名
(file-name-nondirectory "/home/gog/.bashrc") ;;  .bashrc
;; 获取文件拓展名
(file-name-extension "/home/gog/elisp_demo2.el") ;; el
;; 获得绝对路径
(expand-file-name "test3.txt")

