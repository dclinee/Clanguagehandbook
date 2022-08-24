;;; Init.el -- config for myself
;;; Commentary
;;; Code
(require 'package)
;; load packages ourselves
;; Press C-h v on the variable for more documentiation
(setq package-enable-at-startup nil)
;; Add MELPA package-archives
(add-to-list 'package-archive '("melpa" . "https://mirrors.tnua.tsinghua.edu.cn/elpa/melpa/"))
;; Load packages now
(package-initialize)

;; Emacs adds 'custom' settings in the init file by default.
;; Run this file without this segment to see what that means.
(setq custom-file (concat user-emacs-directory "custom.el"))
(load custom-file :noerror)


;; Update local database then install use-package if it's not installed
(unless (package-installed-p 'use-package)
  (package-refresh-contents)
  (package-install 'use-package))

(require 'use-package)
;; tell use-package to install a package if it's not already installed
(setq use-package-always-ensure t)

;; To install Magit and set keyboard shortcut to invoke it
(use-package magit
             :bind (("C-x g" . magit)))

;; Disable the splash screen (to enable it agin, replace the t with 0)
(setq inhibit-splash-screen t)
;; Make ibuffer default
(defalias 'list-buffers 'ibuffer)

;;; Org mode configuration
;; Enable Org mode
(require 'org)







(provide init)
;;; init.el ends here
