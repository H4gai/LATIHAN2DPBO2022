from Produk import Produk
from Hardware import Hardware
from Memori import Memori

#instalasi objek 
data1 = Memori()

#input data menggunakan setter setiap kelas	
data1.setprice(12)
data1.setidproduk("i3000")
data1.setbrand("Lenovo")
data1.setmodel("legion")
data1.setfrekuensi(100)
data1.setMemorisize(8)
data1.setsuport("Yes")
	
#get nilai yang ada pada objek data keseluruhan
print("--- data produk  ---")
print("-----------------------------")
print("Price		: "+ str(data1.getprice())+" juta")
print("Id Produk	: "+ str(data1.getidproduk()))
print("Brand		: "+ str(data1.getbrand()))
print("Model  		: "+ str(data1.getmodel()))
print("Frekuensi 	: "+ str(data1.getfrekuensi())+" Hz")
print("Memori Size	: "+ str(data1.getMemorisize())+" GB RAM")
print("SupportCuda 	: "+ str(data1.getsupport()))	