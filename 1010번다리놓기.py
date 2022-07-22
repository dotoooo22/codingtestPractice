import math as m

n = int(input())
listn = [list(map(int, input().split())) for i in range(n)]
##print(listn)
for list1 in listn:
    print(m.comb(list1[1], list1[0]))