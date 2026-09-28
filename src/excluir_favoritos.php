<?php
ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);

include_once("persistencia.php");

if(! isset($_GET["id"])) {
    echo "Parâmetro ID não informado!";
    exit;
}

$id = $_GET["id"];

$musicas_favoritas = buscar("musicas_favoritas.json");
$musicas = buscar("musicas_geral.json");

$indiceFavorito = 0;
$encontrouNasFavoritas = false;

foreach($musicas_favoritas as $mf){
    if($mf["id"] == $id){
        $encontrouNasFavoritas = true;
        break;
    }
    $indiceFavorito++;
}

if($encontrouNasFavoritas) {
    array_splice($musicas_favoritas, $indiceFavorito, 1);
    salvar($musicas_favoritas, "musicas_favoritas.json");
}

//Para não fica com o simbolo de favorito 
$indice = 0;
$encontrouNaGeral = false;

foreach($musicas as $m){
    if($m["id"] == $id){
        $encontrouNaGeral = true;
        break;
    }
    $indice++;
}

if($encontrouNaGeral) {
    $musicas[$indice]["favorita"] = "n";
    salvar($musicas, "musicas_geral.json");
}

header("location: SpotiMusic.php");
exit;
?>