
(cl:in-package :asdf)

(defsystem "beginner_tutorials-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "dis" :depends-on ("_package_dis"))
    (:file "_package_dis" :depends-on ("_package"))
  ))