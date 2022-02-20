class hardware extends produk
{ 
/*kelas yang digunakan untuk mengimplementasikan hardware/
/*atribut hardware*/
		private String brand;		//brand
		private String model;		//model
	
		public hardware(){
		/*costructor*/
		}
		
		public hardware(String a, String b){
		/*costructor*/
			this.brand = a;
			this.model = b;
		}
	
	/*mengeset nilai brand*/
	public void setbrand(String a)
	{
		this.brand = a;
	}
	/*mengeset nilai model*/
	public void setmodel(String b)
	{
		this.model = b;
	}

	/*mengembalikan nilai brand*/
	String getbrand()
	{
		return this.brand;
	}
	/*mengembalikan nilai model*/
	String getmodel()
	{
		return this.model;
	}
}