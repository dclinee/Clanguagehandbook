;; interactive function examples
(defun hello ()
  "Hello World and you can call it via M-x hello."
  (interactive)
  (message "Hello World!"))
;; using C-x C-e load function hello()
;; M-x hello -> echo area output: Hello World!
