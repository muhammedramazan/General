i = 5
def f(arg=i):
    print(arg)
f()
f()
f()


def f(a, L=[]):
    L.append(a)
    return L

print(f(1))
print(f(2))
print(f(3))

def ff(a, L=None):
    if L is None:
        L = []
    L.append(a)
    return L
print(ff(1))
print(ff(2))
print(ff(3))
