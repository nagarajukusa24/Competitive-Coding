# s = int(input())

# m = s//60
# h = m//60

import datetime
s = int(input())
if(s>=0):

	x = datetime.timedelta(seconds=s)
	print(x)
else:
	print("total second must be a positive integer")