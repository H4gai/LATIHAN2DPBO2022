public class main{

	public static void main(String[] args){
	
	// instansi objek kelas Memory dengan memanggil constructor
	memori data = new memori();
	
	//memasukan data dengan set setiap kelas 
	data.setprice(12);
	data.setidproduk("i3000");
	data.setbrand("Lenovo");
	data.setmodel("legion");
	data.setfrekuensi(100);
	data.setmemorisize(8);
	data.setsuport("Yes");
	
	//get nilai yang ada pada objek data produk
	System.out.println("--- Data produk  ---");
	System.out.println("-----------------------------");
	System.out.println("Price		: "+ data.getprice()+" juta");
	System.out.println("Id Produk	: "+ data.getidproduk());
	System.out.println("Brand		: "+ data.getbrand());
	System.out.println("Model  		: "+ data.getmodel());
	System.out.println("Frekuensi 	: "+ data.getfrekuensi()+" Hz");
	System.out.println("Memori Size	: "+ data.getmemorisize()+" GB RAM");
	System.out.println("SupportCuda 	: "+ data.getsupport());
	
	}
}