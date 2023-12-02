# 格桁の数字を文字列として1文字ずつリストにする
# リストの文字列を足し込んで A, B と比較
# 条件に当てはまる場合は i+1 を総和に加える

N, A, B = map(int, input().split())

result = 0
for i in range(N):
    total = 0
    str_N = str(i+1)
    list_N = list(str_N)
    for str_num in list_N:
        total += int(str_num)
    if A <= total and total <= B:
        result += i+1

print (result)
