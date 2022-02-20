#include <iostream>
#include <string>

using namespace std;

class Produk
{ 
	/*kelas yang digunakan untuk mengimplementasikan Produk/
	/*atribut Produk*/
		private:
			int price = 0;			//price
			string idproduk = "";	//idProduk
	
		public:
		
		Produk(){
		/*costructor*/
		}
		
		Produk(int a, string b){
		/*costructor*/
			this->price = a;
			this->idproduk = b;
		}
	
	/*mengeset nilai price*/
	void setprice(int a)
	{
		this->price = a;
	}
	/*mengeset nilai idProduk*/
	void setidproduk(string b)
	{
		this->idproduk = b;
	}

	/*mengembalikan nilai price*/
	int getprice()
	{
		return this->price;
	}
	/*mengembalikan nilai idProduk*/
	string getidproduk()
	{
		return this->idproduk;
	}
	
	~Produk(){
		/*desstructor*/
		}
};