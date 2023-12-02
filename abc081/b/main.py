N = int(input())
A_N = list(map(int, input().split()))

max = 10000000
# 配列のままmin() を使うと速そう
for A_i in A_N:
    A = A_i
    count = 0
    while A % 2 == 0:
        A = A / 2
        count += 1
    if count < max:
        max = count

print (max)
