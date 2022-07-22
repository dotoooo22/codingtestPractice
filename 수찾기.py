import sys

m = int(input())
listm = list(map(int, sys.stdin.readline().split()))
listm.sort()
n = int(input())
listn = list(map(int, sys.stdin.readline().split()))
for num in listn:
    left, right = 0, m-1
    s = 0
    while left<=right:
        mid = (left+right)//2
        if num==listm[mid]:
            s = 1
            break
        elif num < listm[mid]:
            right = mid-1
        else:
            left = mid+1
    print(s)