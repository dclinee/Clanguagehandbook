;; define a function that will print the your message.

(defun name ()
  "Inter your name and print it."
  (interactive)
  (let ((your-name (read-string "Please enter your name: "))
        (your-addresses (read-string "Please enter your address: ")))
    (message "Your name is %s and your address is %s."
             your-name your-addresses)))
