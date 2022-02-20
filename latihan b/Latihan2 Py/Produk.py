class Produk():
#kelas yang digunakan untuk mengimplementasikan Produk
#atribut Produk
	

	price = 0		#price
	idproduk = ""	#idProduk
	
	def __init__(self, price = 0, idproduk = ""):
	#costructor
		self.price = price
		self.idproduk = idproduk
	
	#mengeset nilai price
	def setprice(self, price):
		self.price = price
        
	#mengeset nilai idProduk
	def setidproduk(self, idproduk):
		self.idproduk = idproduk

	#mengembalikan nilai price
	def getprice(self):
		return self.price

	#mengembalikan nilai idProduk
	def getidproduk(self):
		return self.idproduk
	
	