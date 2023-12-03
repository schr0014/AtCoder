N = int(input())

total = 0
day = 0
for i in range(N+1):
    total += i
    if total >= N:
        day = i
        break

print (day)
