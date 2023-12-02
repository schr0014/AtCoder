N = int(input())
a_N = list(map(int, input().split()))

a_N.sort(reverse=True)

score = 0
flag = 1
for a_i in a_N:
    score += a_i * flag
    flag *= -1

print (score)
