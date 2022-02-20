#include <string>
#include <iostream>

// import file kelas Memori
#include "Memori.cpp"

using namespace std;

int main(){

	// instansi objek kelas Memori, produk, dan hardware dengan memanggil constructor
	Produk Pdata;
	Hardware Hdata;
	Memori Mdata;
	
	//memasukan data menggunakan setter setiap kelas
	Mdata.setprice(12);
	Mdata.setidproduk("i3000");
	Mdata.setbrand("Lenovo");
	Mdata.setmodel("legion");
	Mdata.setfrekuensi(100);
	Mdata.setMemorisize(8);
	Mdata.setsuport("Yes");
	
	//get nilai yang ada pada objek data produk
	cout << "--- data produk  ---"<< endl;
	cout << "-----------------------------" << endl;
	cout << "Price		: "<< Mdata.getprice() << " juta"<< endl;
	cout << "Id Produk	: "<< Mdata.getidproduk() << endl;
	cout << "Brand		: "<< Mdata.getbrand() << endl;
	cout << "Model  		: "<< Mdata.getmodel() << endl;
	cout << "Frekuensi 	: "<< Mdata.getfrekuensi() << " Hz" << endl;
	cout << "Memori Size	: "<< Mdata.getMemorisize()<< " GB RAM" << endl;
	cout << "SupportCuda 	: "<< Mdata.getsupport() << endl;
	
	return 0;
}