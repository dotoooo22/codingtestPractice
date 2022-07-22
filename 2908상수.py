import sys

n1, n2 = map(str, input().split())
r_n1 = n1[::-1]
r_n2 = n2[::-1]
if int(r_n1) > int(r_n2) :
    print(r_n1)
else:
    print(r_n2)

