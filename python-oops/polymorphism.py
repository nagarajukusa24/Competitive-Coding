class parrot:
	def fly(self):
		print("parrot fly")

	def swim():
		print("parrot cant swin")

class penguine:
	def fly(self):
		print("penguine cant fly")

	def swim():
		print("penguine swim")

def fly_test(bird):
	bird.fly()

par = parrot()
pen = penguine()

fly_test(par)
fly_test(pen)