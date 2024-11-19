<?php

$servername = "localhost"; //nome do server (XAMPP)
$username = "root"; //nome de usuario do banco de dados
$password = "root"; //senha do banco de dados
$dbname = "meuBanco"; //nome da database


//criar conexão com MYSQL
$connect = new mysqli ($servername, $username, $password, $dbname, 3307);


//obter os valores dos input HTML, com metodo POST
$user_FORM = $_POST['username'];
$passw_FORM = $_POST['password'];

/*
a var (sql) vai inserir dentro do sql, 
na tabela cadUsuario, dentro dos campos nomeUsuario e senhaUsuario, 
os valores obtidos do HTML 
*/
$sql = "INSERT INTO cadUsuario (nomeUsuario, senhaUsuario) VALUE ('$user_FORM', '$passw_FORM')";

/*
a conexao vai fazer uma consulta dentro do MYSQL, se der tudo certo
o php vai printar uma mensagem de sucesso,
senao por enquanto nada
*/
if ($connect->query($sql) === TRUE) {
    echo "Usuário Cadastrado com Sucesso!";        
}
else {
    echo "Erro com: " . $sql . $connect->error;
}

$connect->close();
?>