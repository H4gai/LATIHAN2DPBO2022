class produk
{ 
	/*kelas yang digunakan untuk mengimplementasikan hardware/
	/*atribut produk*/
		private int price;			//price
		private String idproduk;	//idproduk 
	
		public produk(){
		/*costructor*/
		}
		
		public produk(int a, String b){
		/*costructor*/
			this.price = a;
			this.idproduk = b;
		}
	
	/*mengeset nilai price*/
	public void setprice(int a)
	{
		this.price = a;
	}
	/*mengeset nilai idproduk*/
	public void setidproduk(String b)
	{
		this.idproduk = b;
	}

	/*mengembalikan nilai price*/
	int getprice()
	{
		return this.price;
	}
	/*mengembalikan nilai idproduk*/
	String getidproduk()
	{
		return this.idproduk;
	}
}