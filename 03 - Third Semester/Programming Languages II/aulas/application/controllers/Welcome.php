<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Welcome extends CI_Controller {
	public function index() {
		$this->load->view('welcome_message');
  }
  
  public function mdb() {
    $this->load->view('./common/cabecalho');
    $this->load->view('./introducao/mdb_intro');
    $this->load->view('./common/rodape');

  }
}
