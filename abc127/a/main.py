A, B = map(int, input().split())

price = B
if A <= 5:
    price = 0
elif A <= 12:
    price /= 2

print (int(price))
