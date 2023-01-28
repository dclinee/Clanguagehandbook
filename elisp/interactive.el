;; interactive function examples
(defun hello ()
  "Hello World and you can call it via M-x hello."
  (interactive)
  (message "Hello World!"))
;; using C-x C-e load function hello()
;; M-x hello -> echo area output: Hello World!

;; With interactive reads a string argument
(defun hello-someone (someone)
  "Say hello to SOMEONE via M-x hello-someone."
  (interactive "sWho do you want to say hello to? ")
  (message "Hello %s!" someone))
;; To use multiple arguments, separate their 'interactive' entries with a newline
(defun multiple-hello (someone num)
  "Say hello to SOMEONE via M-x multiple-hello, for NUM times."
  (interactive "sWho do you want to say hello to? \nnHow many times? ")
  (dotimes (i num)
    (insert (format "Hello %s!\n" someone))))
