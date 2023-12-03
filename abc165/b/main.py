X = int(input())

money = 100
year = 0
while money < X:
    year += 1
#    money = int(money * 1.01)
#    money = money + int(money * 0.01)
    money = money + money // 100

print (year)
