<?php
  class LoginModel extends CI_Model {
    public function logUserIn() {
      if (!$_POST) return;
      
      $email = $_POST['email'];
      $senha = $_POST['senha'];

      //Buscar no db informações do usuário se ele existir
      $sql = "SELECT * FROM login WHERE email = '$email' AND senha = '$senha'";
      $rs = $this->db->query($sql);

      if (sizeof($rs->result()) == 1) {
        echo 'Login feito com sucesso, seja bem vindo(a)! <br>';
      } else {
        echo 'Dados de acesso incorretos, tente novamente!<br>';
      }
    }
  }