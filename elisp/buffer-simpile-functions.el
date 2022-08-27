;; This buffer is for text that is not saved, and for Lisp evaluation.
;; To create a file, visit it with C-x C-f and enter text in its buffer.

(list-buffers)
(buffer-name)
;; This buffer is for text that is not saved, and for Lisp evaluation.
;; To create a file, visit it with C-x C-f and enter text in its buffer.

(list-buffers)
(buffer-name)
(switch-to-buffer (other-buffer))
(progn (print "first.")
       (print "second.")
       (print "third."))
(prog1 (print "first.")
       (print "second.")
       (print "third."))
(prog2 (print "first.")
       (print "second.")
  (print "third."))

(buffer-name)
(buffer-file-name)
(buffer-size)
(point)
(buffer-size)
(point)
