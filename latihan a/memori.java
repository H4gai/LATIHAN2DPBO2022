class memori extends hardware
{ 
/*kelas yang digunakan untuk mengimplementasikan memori/
/*atribut memori*/
		private int frekuensi;		//frekuensi
		private int memorisize;		//memorisize
		private String support;		//suppoertcuba
	
		public memori(){
		/*costructor*/
		}
		
		public memori(int a, int b, String c){
		/*costructor*/
			this.frekuensi = a;
			this.memorisize = b;
			this.support = c;
		}
	
	/*mengeset nilai frekuensi*/
	public void setfrekuensi(int a)
	{
		this.frekuensi = a;
	}
	/*mengeset nilai memorisize*/
	public void setmemorisize(int b)
	{
		this.memorisize = b;
	}
	
	/*mengeset nilai support*/
	public void setsuport(String c)
	{
		this.support = c;
	}

	/*mengembalikan nilai frekuensi*/
	int getfrekuensi()
	{
		return this.frekuensi;
	}
	/*mengembalikan nilai memorisize*/
	int getmemorisize()
	{
		return this.memorisize;
	}
	
	/*mengembalikan nilai support*/
	String getsupport()
	{
		return this.support;
	}
}