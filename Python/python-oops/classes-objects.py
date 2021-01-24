class parrot:
	#class attribute
	species = "bird"
	#instance attribute
	def __init__(self):
		print("Im parrot")

	def inse(self,name):
		self.name=name
		print(self.name)

#instantiate parrot class
obj = parrot()

obj.inse("naga")

#access class attributes
print("Hello {}".format(obj.__class__.species))
