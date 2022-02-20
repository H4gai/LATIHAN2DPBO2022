<?php

class Produk
{ 
	/*kelas yang digunakan untuk mengimplementasikan Produk/
	/*atribut Produk*/
	
		private $price = 0;		//price
		private $idproduk = "";	//idProduk
	
		public function __construct($price = 0, $idproduk = ""){
		/*costructor*/
			$this->price = $price;
			$this->idproduk = $idproduk;
		}
	
	/*mengeset nilai price*/
	public function setprice($price)
	{
		$this->price = $price;
	}
	/*mengeset nilai idProduk*/
	public function setidproduk($idproduk)
	{
		$this->idproduk = $idproduk;
	}

	/*mengembalikan nilai price*/
	public function getprice()
	{
		return $this->price;
	}
	/*mengembalikan nilai idProduk*/
	public function getidproduk()
	{
		return $this->idproduk;
	}
	
	function __destruct(){
		/*desstructor*/
		}
}
?>