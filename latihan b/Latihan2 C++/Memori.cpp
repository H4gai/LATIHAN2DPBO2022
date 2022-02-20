#include <iostream>
#include <string>

using namespace std;

// import file kelas parent
#include "Hardware.cpp"

class Memori : public Hardware
{ 
/*kelas yang digunakan untuk mengimplementasikan memori/
/*atribut Memori*/
		private:
		
		int frekuensi = 0;		//frekuensi
		int Memorisize =0;		//Memorisize
		string support ="";		//Support
		
		public:
	
		Memori(){
		/*costructor*/
		}
		 // constructor dengan parameter
        Memory(int frekuensi, int MemorySize, string support){
            this->frekuensi = frekuensi;
            this->Memorisize = Memorisize;
            this->support = support;
        }
	
	/*mengeset nilai frekuensi*/
	void setfrekuensi(int frekuensi)
	{
		this->frekuensi = frekuensi;
	}
	/*mengeset nilai Memorisize*/
	void setMemorisize(int Memorisize)
	{
		this->Memorisize = Memorisize;
	}
	
	/*mengeset nilai support*/
	void setsuport(string support)
	{
		this->support = support;
	}

	/*mengembalikan nilai frekuensi*/
	int getfrekuensi()
	{
		return this->frekuensi;
	}
	/*mengembalikan nilai Memorisize*/
	int getMemorisize()
	{
		return this->Memorisize;
	}
	
	/*mengembalikan nilai support*/
	string getsupport()
	{
		return this->support;
	}
	
	~Memori(){
		/*destructor*/
		}
};