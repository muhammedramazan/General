fruits = ['orange', 'apple', 'pear', 'banana', 'kiwi', 'apple', 'banana']
print(fruits.count('apple'))
print(fruits.count('tangerine'))
print(fruits.index('banana'))
print(fruits.index('banana', 4))  # Find next banana starting at position 4
print(fruits.reverse())
print(fruits)
print(fruits.append('grape'))
print(fruits)
print(fruits.sort())
print(fruits)
print(fruits.pop())

print("List Comprehensions")
squares = []
for x in range(10):
    squares.append(x**2)

print(list(range(10)))
print(squares)
print(x)

print("List Comprehensions 1 ")
squares = list(map(lambda x: x**2, range(10)))
print(squares)

print("List Comprehensions 2 ")

squares = [(x, y) for x in [1,2,3] for y in [3,1,4] if x != y]
squares.append("asd")
squares.append(1123)

print(squares)

a = [-1, 1, 66.25, 333, 333, 1234.5]
print(a)

del a[0]
print("----")

print(a)
print(a[0:4])
print(a[2:4])

del a[2:4]
print(a)

del a[:]
print(a)
