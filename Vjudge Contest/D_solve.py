
n = int(input())


laptops = []
for _ in range(n):
    price, quality = map(int, input().split())
    laptops.append((price, quality))


laptops.sort()


happy = False
for i in range(1, n):
    if laptops[i][1] < laptops[i - 1][1]:  
        happy = True
        break


if happy:
    print("Happy Alex")
else:
    print("Poor Alex")
