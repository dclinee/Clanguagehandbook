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
;; foo1 function takes no argument
(defun foo1 ()
  (interactive)
  (forward-word 2) ;; just moves forward two words
  )

;;
(defun foo2 (n)
  (interactive "^p")
  (forward-word (* 2 n)))
;; To use interactive "p" option in function
(defun multiple-by-seven (number)
  "Multiple NUMBER by seven."
  (interactive "p")
  (message "The result is %d." (* number 7)))
