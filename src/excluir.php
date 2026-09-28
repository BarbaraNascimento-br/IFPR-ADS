<?php

ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);

include_once("persistencia.php");

//mostra uma mensagem caso o id não venha na url
if(! isset($_GET["id"])) {
    echo "Parâmetro ID não informado!";
    //não deixar o resto do codigo em execução
    exit;
}

$id = $_GET["id"];

$musicas = buscar("musicas_geral.json");
$musicas_favoritas = buscar("musicas_favoritas.json");


//variavvel que irá guardar a posição da musica que será excluida 
$indice = 0;
foreach($musicas as $m) {
    if($m["id"] == $id) {
        break;
    }
    $indice++;
}

$indiceFavorita = 0;
foreach($musicas_favoritas as $mf) {
    if($mf["id"] == $id) {
        break;
    }
    $indiceFavorita++;
}

array_splice($musicas, $indice, 1);
salvar($musicas, "musicas_geral.json");

array_splice($musicas_favoritas, $indiceFavorita, 1);
salvar($musicas_favoritas, "musicas_favoritas.json");

header("location: SpotiMusic.php");
exit;
?>