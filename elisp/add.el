;;add.el
(setq counter 0)             ; Let's call this the initializer
(setq counter (+ counter 1)) ; This is the incrementer
counter                      ; This is the counter
(message "the counter is: %d" counter)
