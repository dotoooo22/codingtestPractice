n1, n2 = map(str, input().split())
print(bin(int(n1, 2) + int(n2, 2))[2::])