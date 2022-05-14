# list
# method one
print(f'the first method oupt:')
a = list(range(1, 11))
print(a)
print()


#method two
print(f'The second method output:')
a = [i for i in range(1, 11)]
print(a)
print()

# methond three

print(f'The thrid method output:')
x = []
for i in range(1, 11):
         x.append(i)
print(x)
print()

# testing condition
print(f'The output of testing condition:')
a = [i for i in range(1, 11) if i%2 ==0]
print(a)
print()

# method three of testing condition
print(f'The method three of testing condition output:')
x = []
for i in range(1, 11):
    x.append(i)
print(x)
print()

# add two testing condition
#a = [i for i range(1, 11) if i % 2 == 0]
#b = [i for i range(1, 11) if i % 2 != 0]
#print(a)
#print(b)
x = []
y = []

for i in range(1, 11):
    if i% 2 == 0:
        x.append(i)

    else:
        y.append(i)

print(x)
print(y)
print()
# for in for loop
a1 = [(i, a) for i in range(i, 11) for a in range(1, 11)]
print(a1)
print()
# common expression
x = []
for i in range(1, 11):
    for a in range(1, 11):
        x.append((i, a))
print(x)
print()
# three for loop in one line
a1 = [(i, a, j) for i in range(1, 11) for a in range(1, 11) for j in range(1, 11)]
print(a1)
print()


# three for loop in common expression
x = []
for i in range(1, 11):
    for a in range(1, 11):
        for j in range(1, 11):
            x.append((i, a, j))
print(x)
print()
