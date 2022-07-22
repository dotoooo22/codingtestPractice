from datetime import datetime

year = datetime.today().year
month = datetime.today().month
day = datetime.today().day
print(str(year) + "-", end="")

if month <10 :
    print( "0" + str(month), end="")
print("-", end="")
if day < 10 :
    print( "0" + str(day))