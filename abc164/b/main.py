A, B, C, D = map(int, input().split())

count = 0
while True:
    if count % 2 == 0:
        C -= B
        if C <= 0:
            print ("Yes")
            break
    else:
        A -= D
        if A <= 0:
            print ("No")
            break
    count += 1
