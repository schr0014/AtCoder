H, W = map(int, input().split())
S = [list(input()) for _ in range(H)]

# W列H行の2次元配列を準備する
a = [[0 for j in range(W)] for i in range(H)]

# FIXME [-1, 0, 1] を 2軸に回せば良い（[0, 0]は # ではない）
# FIXME 右のリストでループするのも良い [[-1,-1], [0,-1], [1,-1], [-1,0], [0,0], [1,0], [-1,1], [1,-1], [1,0], [1,1]]

# 2列のループを回しつつ、ターゲットの周囲を詮索せして数を足しこむ
for h, record in enumerate(S):
    for w, value in enumerate(record):
        if value == "#":
            a[h][w] = "#"
        else:
            if h-1 >= 0 and w-1 >= 0 and S[h-1][w-1] == "#":
                a[h][w] += 1
            if w-1 >= 0 and S[h][w-1] == "#":
                a[h][w] += 1
            if h+1 <= H-1 and w-1 >= 0 and S[h+1][w-1] == "#":
                a[h][w] += 1
            if h-1 >= 0 and S[h-1][w] == "#":
                a[h][w] += 1
            if h+1 <= H-1 and S[h+1][w] == "#":
                a[h][w] += 1
            if h-1 >= 0 and w+1 <= W-1 and S[h-1][w+1] == "#":
                a[h][w] += 1
            if w+1 <= W-1 and S[h][w+1] == "#":
                a[h][w] += 1
            if h+1 <= H-1 and w+1 <= W-1 and S[h+1][w+1] == "#":
                a[h][w] += 1

for record in a:
    print ("".join(map(str, record)))
