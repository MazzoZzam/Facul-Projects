<?php
$user_data = [
    "nome" => "juao",
    "email" => "jaojooj@gmail.com",
    "CPF" => "000.000.000-01"
];

$user_shoppingList = [
    "item1" => "Bioshock",
    "item2" => "Deus EX",
    "item3" => "Half-Life 2"
];

$user_payment = [
    "pay_Credit" => "MasterCard",
    "pay_Debt" => "Visa",
    "pay_Pic" => "(11) 99999-9999"
];  

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Histórico de Compras</title>
</head>
<body>
<table border = 1>
    <tr>
        <td> <h3>Dados:</h3> </td>

        <?php foreach ($user_data as $i) {
        ?>
        <td style="text-align: center">
            <?php print $i; } ?> 
        </td>   
    </tr>

    <tr>
        <td> <h3> Histórico: </h3> </td>
        <?php foreach ($user_shoppingList as $i) {
        ?>
        <td style="text-align: center">
            <?php print $i; } ?> 
        </td> 
    </tr>

    <tr>
        <td> <h3> Pagamento: </h3> </td>
        <?php foreach ($user_payment as $i) {
        ?>
        <td style="text-align: center">
            <?php print $i; } ?> 
        </td> 
    </tr>
</table>
</body>
</html>
