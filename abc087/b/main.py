A = int(input())
B = int(input())
C = int(input())
X = int(input())

count = 0

# 大きい順にコインを1枚ずつ増やして使い切れる場合があるかを探索
# 一番小さいコインは1通りしかないので、その値がC以下かをチェック
for i in range(A+1):
    modA = X - 500 * i
    if modA < 0:
        continue
    elif modA == 0:
        count += 1
        continue
    for j in range(B+1):
        modAB = modA - 100 * j
        if modAB < 0:
            continue
        elif modAB == 0:
            count += 1
            continue
        if modAB / 50 <= C:
            count += 1
            continue

print (count)
