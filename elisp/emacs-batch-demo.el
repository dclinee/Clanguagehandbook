(message "hello, elisp.")

(defun my-read-string-example ()
  "简单的 read-string 示例，提示用户输入姓名。"
  (interactive)
  (let ((name (read-string "请输入你的姓名: ")))
    (message "你输入的姓名是: %s" name)))

;; 调用函数
(my-read-string-example)
