H, W = map(int, input().split())

# 1列飛ばし＆1行飛ばしで配置する 
# 整数割り算の切り上げ: (X+N-1)//N, N=2 → (X+1)//2
if H == 1 or W == 1:
    print( H * W )
else:
    print( ((H+1)//2) * ((W+1)//2) )
