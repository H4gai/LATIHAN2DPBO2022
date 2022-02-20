<?php

// import file kelas Memori
include "Memori.php";

	// instansi objek kelas Memory dengan memanggil constructor
	$data = new Memori();
	
	//memasukan data dengan set setiap kelas 
	$data->setprice(12);
	$data->setidproduk("i3000");
	$data->setbrand("Lenovo");
	$data->setmodel("legion");
	$data->setfrekuensi(100);
	$data->setMemorisize(8);
	$data->setsuport("Yes");
	
	//get nilai yang ada pada objek data keseluruhan
	echo "--- data produk  ---"."<br>";
	echo "-----------------------------"."<br>";
	echo "Price		: ". $data->getprice()." juta"."<br>";
	echo "Id Produk	: ". $data->getidproduk()."<br>";
	echo "Brand		: ". $data->getbrand()."<br>";
	echo "Model  		: ". $data->getmodel()."<br>";
	echo "Frekuensi 	: ". $data->getfrekuensi()." Hz"."<br>";
	echo "Memori Size	: ". $data->getMemorisize()." GB RAM"."<br>";
	echo "SupportCuda 	: ". $data->getsupport()."<br>";
	
	
?>