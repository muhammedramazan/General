# Measure some strings:
print("1-)")
words = ['cat', 'window', 'defenestrate']
for w in words:
    print(w, len(w))
print("2-)")
users = {'Hans': 'active', 'Éléonore': 'inactive', '景太郎': 'active'}
for user, status in users.copy().items():
    print(user, " - ", status)
    if status == 'inactive':
        del users[user]


for temp in users.copy().items():
    print("temp " ,temp)

print("3-)")
active_users = {}
for user, status in users.items():
    if status == 'active':
        active_users[user] = status

print("users")
for temp in users.copy().items():
    print("temp " ,temp)
print("active_users")
for temp in active_users.copy().items():
    print("temp " ,temp)


print("range()")
print(range(5).count)
for i in range(5):
    print(i)
a = ['Mary', 'had', 'a', 'little', 'lamb']
for i in range(len(a)):
    print(i, a[i])
print("break")
for n in range(2, 10):
    for x in range(2, n):
        if n % x == 0:
            print(n, 'equals', x, '*', n//x)
            break
    else:
        # loop fell through without finding a factor
        print(n, 'is a prime number')
print("continuous")
for num in range(2, 10):
    if num % 2 == 0:
        print("Found an even number", num)
        continue
    print("Found an odd number", num)

print("pass Statements")
while True:
    pass  
print("endpass")