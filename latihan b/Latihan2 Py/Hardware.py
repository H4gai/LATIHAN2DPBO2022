from Produk import Produk

#kelas yang digunakan untuk mengimplementasikan kelas Hardware
class Hardware(Produk):

	#konstruktor
	def __init__(self):
		self.brand = ""
		self.model = ""

	#getter dan setter untuk atribut brand
	def setbrand(self, brand):
		self.brand = brand

	def getbrand(self):
		return self.brand

	#getter dan setter untuk atribut model
	def setmodel(self, model):
		self.model = model

	def getmodel(self):
		return self.model