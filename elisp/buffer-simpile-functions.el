;;; package exercise.el --- summary
;;; commentary
;;; Code:
(defun simplified-end-of-buffer ()
  "Move point to the end of the buffer."
  (interactive)
  (push-mark)
  (goto-char (point-max)))

(defun simplified-beginning-of-buffer ()
  "Move point to the beginning of the buffer."
  (interactive)
  (push-mark)
  (goto-char (point-min)))

(list-buffers)
(buffer-name)
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
(buffer-size)
(point)
(buffer-size)
(point)
(defun my-mark-whole-buffer ()
  "Define a makrk whole buffer function."
  (interactive)
  (push-mark (point))
  (push-mark (point-max) nil t)
  (goto-char (point-min)))
