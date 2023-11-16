def make_incrementor(n):
    return lambda x: x + n

f = make_incrementor(42)
print(f(0))
print(f(1))

pairs = [(1, '9one'), (2, '5two'), (3, '4three'), (4, '1four')]
pairs.sort(key=lambda pair: pair[1])
print(pairs)