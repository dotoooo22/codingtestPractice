import sys

a,b,c = map(int, sys.stdin.readline().split())

def sol(A, B) :
    if B==1 :
        return A%c
    else:
        t = sol(A, B//2)
        if b%2==0:
            return (t*t)%c
        else:
            return (t*t*A)%c
    



print(sol(a,b))
