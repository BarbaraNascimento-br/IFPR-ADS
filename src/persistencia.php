<?php
//Definindo umaconstante
define("DIR_ARQUIVOS", "arquivos");

//Criinado uma função para salvar dados
function salvar(array $dados, string $nomeDoArquivo){
    //pega os elementos da lista e transforma em formato json
    $json = json_encode($dados, JSON_PRETTY_PRINT);

    //grava o texto json na pasta (um arquivo) 
    file_put_contents(DIR_ARQUIVOS."/".$nomeDoArquivo, $json);
}

// função de busca que retorna um array
function buscar(string $nomeDoArquivo) : array{
    $dados = array();

    //condição
    if(file_exists(DIR_ARQUIVOS."/".$nomeDoArquivo)){
        //abre o arquivo e verifica o conteudo 
        $json = file_get_contents(DIR_ARQUIVOS."/".$nomeDoArquivo);
        $dados = json_decode($json, true);
    }
    return $dados;
}

?>