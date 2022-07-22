import datetime
m, d = map(int, input().split())
x = datetime.datetime(2007, m, d)
print(str(x.strftime("%A")[:3:]).upper())