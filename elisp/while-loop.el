;;; package -- while-loop.el
;;; commentary:
;;; Code:
(setq animals '(tiger cheetah lion whale))
(defun print-elements-of-list (animals)
  "Print each element of the ANIMALS of its own."
  (while animals
    (progn
      (print (car animals))
      (setq animals (cdr animals)))))
(print-elements-of-list animals)


;;;  while loop.el ends here
