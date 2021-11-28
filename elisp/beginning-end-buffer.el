;; Happy hacking, mrc20 - Emacs ♥ you!
(defun simplified-beginning-of-buffer ()
  "Move point to the beginning of the buffer;
leave mark at previous position"
  (interactive)
  (push-mark)
  (goto-char (point-min)))
(simplified-beginning-of-buffer)


(defun simplified-end-of-buffer ()
  "Move point to the end of the buffer;
leave mark at previous position."
  (interactive)
  (push-mark)
  (goto-char (point-max)))

(simplified-end-of-buffer)
