## there was no option for C++ in the language selection, so I used Python instead. (pretty easy in python UwU)
s = input()
numbers = []
for c in s:
    if c.isdigit():
        numbers.append(c)
numbers.sort()
result = '+'.join(numbers)
print(result)
