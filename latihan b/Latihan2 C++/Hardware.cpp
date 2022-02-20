#include <iostream>
#include <string>

using namespace std;

// import file kelas parent
#include "Produk.cpp"

class Hardware : public Produk{ 

/*kelas yang digunakan untuk mengimplementasikan Hardware/
/*atribut Hardware*/
		private:
			string brand = "";		//brand
			string model = "";		//model
	
		public:
		
		Hardware(){
		/*costructor*/
		}
		
		 // constructor dengan parameter
        Hardware(string brand, string model){
            this->brand = brand;
            this->model = model;
        }
	
	/*mengeset nilai brand*/
	void setbrand(string brand)
	{
		this->brand = brand;
	}
	/*mengeset nilai model*/
	void setmodel(string model)
	{
		this->model = model;
	}

	/*mengembalikan nilai brand*/
	string getbrand()
	{
		return this->brand;
	}
	/*mengembalikan nilai model*/
	string getmodel()
	{
		return this->model;
	}
	
	~Hardware(){
		/*desstructor*/
		}
};