
;; Basic of elisp
(defun hello-world (name)
  "Say hello to user whose name is NAME."
  (message "hello, %s" name))
(hello-world "dclinee")
(hello-world "world")

(setq foo "I'm foo.")
(message foo)

(defvar foo "Did I have a value?"
  "A demo variable")
foo

(defvar bar "I'm bar"
  "a demo variable named \"bar\"")
bar

(defun circle-area (radix)
  (let ((pi 3.1415926)
	area)
    (setq area (* pi radix radix))
    (message "radix is: %.2f and area is: %.2f"
	     radix area)))
(circle-area 3)

;; (let (bindings) body)
(defun circle-area (radix)
  (let* ((pi 3.1415926)
	 (area (* pi radix radix)))
    (message "radix is: %.2f and area is: %.2f"
	     radix area)))
(circle-area 4)

(funcall (lambda (name)
	   (message "Hello, %s!" name)) "Emacser")

(setq foo (lambda (name)
	    (message "Hello, %s!" name)))
(funcall foo "Emacser")

(progn
  (setq foo 3)
  (message "Square of %d is %d" foo (* foo foo)))

(defun my-max (a b)
  (if (> a b)
      a b))
(my-max 3 4)

(defun fib (n)
  (cond ((= n 0) 0)
	((= n 1) 1)
	(t (+ (fib (- n 1)) (fib ( - n 2))))))
(fib 1)
(fib 2)
(fib 3)
(fib 4)
(fib 10)


(defun factorial (n)
  (let ((res 1))
    (while ( > n 1)
      (setq res (* res n)
	    n (- n 1)))
    res))
(factorial 10)

(defun hello-world (&optional name)
  (or name (setq name "Emacser"))
  (message "Hello, %s" name))
(hello-world)
(hello-world "ye")

(defun square-number-p (n)
  (and (>= n 0)
       (= (/ n (sqrt n)) (sqrt n))))
(square-number-p -1)
(square-number-p 25)

(defun wrap-markup-region ()
  "Wrap markup region"
  (interactive)
  (let ((p1 (region-beginning))
        (p2 (region-end)))
    (goto-char p2)
    (insert "</b>")
    (goto-char p1)
    (insert "<b>")))
