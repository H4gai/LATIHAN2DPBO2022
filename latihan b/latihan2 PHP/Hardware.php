<?php
// import file kelas parent
include "Produk.php";

class Hardware extends Produk{ 

/*kelas yang digunakan untuk mengimplementasikan Hardware/
/*atribut tim Hardware*/

		private $brand = "";		//brand
		private $model = "";		//model
	
		
		 // constructor dengan parameter
        public function __construct($brand ="", $model =""){
            $this->brand = $brand;
            $this->model = $model;
        }
	
	/*mengeset nilai brand*/
	public function setbrand($brand)
	{
		$this->brand = $brand;
	}
	/*mengeset nilai model*/
	public function setmodel($model)
	{
		$this->model = $model;
	}

	/*mengembalikan nilai brand*/
	public function getbrand()
	{
		return $this->brand;
	}
	/*mengembalikan nilai model*/
	public function getmodel()
	{
		return $this->model;
	}
	
	function __destruct(){
		/*destuktor*/
	}
	
}

?>