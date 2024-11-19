<?php
define ("user", "mazz");
define ("pass", "mazz123");

$user_name = $_POST['usuario']; 
$user_pass = $_POST['senha'];

if ($user_name == user && $user_pass == pass) {
    print ("Suas informações estão corretas");
} else {
    header("Location: login_area.html");
}
?>
