;;; Lisp - Lambda Function

;; Lisp allows you to write anonymous functions that are evaluated
;; only when they are encountered in the program.
;; These functions are called Lambda functions.

;; The syntax for the lambda expression is as follows:

;;; Code:
(lambda (parameters) body)

(write ((lambda (a b c x)
          (+ (* a (* x x)) (* b x) x))
        4 2 9 3)
       )

(lambda (arg-variables...)
  [documentation-string]
  [interactive-declaration]
  body-forms...)

(lambda (x) (+ x x))

(lambda (x) (+ x x) 17)
