print("Scopes and Namespaces Example")
spam = "test global spam"

def scope_test():
    def do_local():
        spam = "local spam"
        print("in do local:", spam)
        

    def do_nonlocal():
            nonlocal spam
            spam = "nonlocal spam"
            print("in do nonlocal:", spam)


    def do_global():
        global spam
        spam = "global spam"
        print("in do global:", spam)

    spam = "test nonlocal spam"

    do_local()
    print("After local assignment:", spam)

    do_nonlocal()
    print("After do_nonlocal assignment:", spam)
    do_global()
    print("After global assignment:", spam)

scope_test()
print("In global scope:", spam)