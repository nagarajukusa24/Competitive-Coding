class computer:
	def __init__(self):
		self.__maxprice = 1000
		print("Iam done")

	def sell(self):
		print("Sell Price is: {}".format(self.__maxprice))

	def  setprice(self, amt):
		self.__maxprice = amt

obj = computer()
obj.sell()

#Manual Setting
obj.__maxprice = 2000
obj.sell()

#update price
obj.setprice(2000)
obj.sell()
