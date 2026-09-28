<?php

ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);

include_once("persistencia.php");

//buscando as musicas já cadastras no musicas_geral.json e musicas_favoritas.json
$lista_musicas = buscar("musicas_geral.json");
$lista_favoritas = buscar("musicas_favoritas.json");
$msgErro = "";

//Verificar se o usuário já enviou o formulário
if(isset($_POST["musica"])){
    //Capturar os dados do formulário
    $nome_musica = $_POST["musica"];
    $nome_artista = $_POST["artista"];
    $genero_musica = $_POST["genero"];
    $nota_musica = $_POST["nota"];
    $musica_favorita = $_POST["favorita"]; //não será obrigatório 

    
    //Validação dos dados
    $erros = array();
     if(trim($nome_musica) == ""){
        array_push($erros, "Informe a música");
    }
    if(trim($nome_artista) == ""){
        array_push($erros, "Informe o artista");
    }
    if(trim($genero_musica) == ""){
        array_push($erros, "Informe o genêro");
    }
    if(trim($nota_musica) == ""){
        array_push($erros, "Informe a nota");
    }

   
    //se não tem erros, vamos colocar as informações na lista musicas
    if(count($erros) == 0){
        $musica = array(
            "id" => uniqid(),
            "nome_musica" => $nome_musica,
            "nome_artista" => $nome_artista,
            "genero" => $genero_musica,
            "nota" => $nota_musica,
            "favorita" => $musica_favorita
        );

        array_push($lista_musicas, $musica);
        // Todas as musicas serão salvas no arquivo -> musicas_geral.json
        salvar($lista_musicas, "musicas_geral.json");

        //verificando se a musica é favorita, se sim, ela será salva em musicas_favoritas.json
        if($musica_favorita == 's'){
            array_push($lista_favoritas, $musica);
            salvar($lista_favoritas, "musicas_favoritas.json");
        }

        header("location: SpotiMusic.php");

    }else{
        $msgErro = implode("<br>", $erros);
    }
        
}

?>

<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>SpotiMusic</title>
    <link rel="icon" type="image/png" href="imgs/musica.png">
    <link rel="stylesheet" href="style_SpotiMusic.css">
</head>
    
<body>

    <h1>SpotiMusic</h1>

    <h2>Cadastro de músicas</h2>
    <!--mostrando o formulario-->
    <div>


        <form method="POST" action="" onsubmit="return validar();">
            <input type="text" name="musica" id="musica"
                placeholder="nome da música"/>

            <input type="text" name="artista" id="artista"
                placeholder="nome do artista"/>

            <select name="genero" id="genero">
                <option value="">--Selecione o gênero--</option>
                <option value="R">ROCK</option>
                <option value="P">POP</option>
                <option value="K">K-POP</option>
                <option value="B">MPB</option>
                <option value="O">OUTROS</option>
            </select>

            <input type="number" name ="nota" id="nota"
                placeholder="informe a nota"/>

            <h3>é favorita?</h3>
            <select name="favorita" id="favorita">
                <option value="">--Selecione o gênero--</option>
                <option value="s">SIM</option>
                <option value="n">NÃO</option>
            </select>

            <input type="submit" value="Enviar" />


        </form>
    </div>
    <!--mostrando os erros-->
    <div id="divErro" style="color: red;">
        <?= $msgErro ?> 
    </div>

    <!--mostrando todas as músicas-->
    <div>
        <h2>Todas as músicas</h2>
        <table>
            <tr>
                <th>ID</th>
                <th>Música</th>
                <th>Artista</th>
                <th>Gênero</th>
                <th>Nota</th>
                <th>Favorita</th>
                <th>Excluir</th>
            </tr>

            <?php foreach($lista_musicas as $m): ?>

                <tr>
                    <td><?= $m["id"] ?></td>
                    <td><?= $m["nome_musica"] ?></td>
                    <td><?= $m["nome_artista"] ?></td>
                    <td><?php
                        if($m["genero"] == "R")
                            echo "Rock";
                        else if($m["genero"] == "P")
                            echo "Pop";
                        else if($m["genero"] == "K")
                            echo "K-Pop";
                        else if($m["genero"] == "B")
                            echo "MPB";
                        else if($m["genero"] == "O")
                            echo "Outros";
                    ?></td>

                    <td><?= $m["nota"] ?></td>
                  <td><?= $m["favorita"] == "s" ? '<img src="imgs/favorito.png" width="20" >' : "" ?></td>
                    <td>
                        <a href="excluir.php?id=<?= $m["id"] ?>"
                            onclick="return confirm('Confirma a exclusão?');"><img src="imgs/excluir.png" width="20"></a>
                    </td>
                </tr>

            <?php endforeach; ?>
        </table>
    </div>

    <!--mostrando todas as musicas favoridas-->
    <div>
        <h2>Músicas favoritas</h2>
        <table border="1">
            <tr>
                <th>ID</th>
                <th>Música</th>
                <th>Artista</th>
                <th>Gênero</th>
                <th>Nota</th>
                <th>Excluir</th>
            </tr>

            <?php foreach($lista_favoritas as $f): ?>

                <tr>
                    <td><?= $f["id"] ?></td>
                    <td><?= $f["nome_musica"] ?></td>
                    <td><?= $f["nome_artista"] ?></td>
                    <td><?php
                        if($f["genero"] == "R")
                            echo "Rock";
                        else if($f["genero"] == "P")
                            echo "Pop";
                        else if($f["genero"] == "K")
                            echo "K-Pop";
                        else if($f["genero"] == "B")
                            echo "MPB";
                        else if($f["genero"] == "O")
                            echo "Outros";
                    ?></td>

                    <td><?= $f["nota"] ?></td>
                    <td>
                        <a href="excluir_favoritos.php?id=<?= $f["id"] ?>"
                            onclick="return confirm('Confirma a exclusão?');"><img src="imgs/excluir.png"></a>
                    </td>
                </tr>

            <?php endforeach; ?>
        </table>
    </div>


    <script src="validacao.js"></script>
    
</body>

</html>