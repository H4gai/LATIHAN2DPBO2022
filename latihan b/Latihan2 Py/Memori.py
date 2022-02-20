from Hardware import Hardware

#kelas yang digunakan untuk mengimplementasikan kelas Memory
class Memori(Hardware):

	#konstruktor
	def __init__(self):
		self.frekuensi = 0
		self.Memorisize = 0
		self.support = ""

	#getter dan setter untuk atribut frekuensi
	def setfrekuensi(self, frekuensi):
		self.frekuensi = frekuensi

	def getfrekuensi(self):
		return self.frekuensi

	#getter dan setter untuk atribut memorySize
	def setMemorisize(self, Memorisize):
		self.Memorisize = Memorisize

	def getMemorisize(self):
		return self.Memorisize

	#getter dan setter untuk atribut supportsCuda
	def setsuport(self, support):
		self.support = support

	def getsupport(self):
		return self.support