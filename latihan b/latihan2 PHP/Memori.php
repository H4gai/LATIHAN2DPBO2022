<?php
// import file kelas parent
include "Hardware.php";

class Memori extends Hardware
{ 
/*kelas yang digunakan untuk mengimplementasikan memori/
/*atribut Memori*/
		private $frekuensi = 0;		//frekuensi
		private $Memorisize = 0;	//Memorisize
		private $support = "";		//support
		
		 // constructor dengan parameter
        public function __construct($frekuensi = 0, $Memorisize = 0, $support=""){
            $this->frekuensi = $frekuensi;
            $this->Memorisize = $Memorisize;
            $this->support = $support;
        }
	
	/*mengeset nilai frekuensi*/
	public function setfrekuensi($frekuensi)
	{
		$this->frekuensi = $frekuensi;
	}
	/*mengeset nilai Memorisize*/
	public function setMemorisize($Memorisize)
	{
		$this->Memorisize = $Memorisize;
	}
	
	/*mengeset nilai support*/
	public function setsuport($support)
	{
		$this->support = $support;
	}

	/*mengembalikan nilai frekuensi*/
	public function getfrekuensi()
	{
		return $this->frekuensi;
	}
	/*mengembalikan nilai memorisize*/
	public function getMemorisize()
	{
		return $this->Memorisize;
	}
	
	/*mengembalikan nilai support*/
	public function getsupport()
	{
		return $this->support;
	}
	
	function __destruct(){
		/*destuktor*/
	}
}

?>