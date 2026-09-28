function validar() {
    var divErro = document.querySelector("#divErro");

    var musica = document.getElementById("musica").value;
    var artista = document.querySelector("#artista").value;
    var genero  = document.querySelector("#genero").value;
    var nota    = document.querySelector("#nota").value;


     //Validar nome musica
    if(musica.trim() == '') {
        divErro.innerHTML = "Informe o nome da música!";
        return false;
    }

     //Validar artista
    if(artista.trim() == '') {
        divErro.innerHTML = "Informe o artista!";
        return false;
    }

    //Validar genero
    if(genero.trim() == '') {
        divErro.innerHTML = "Informe o gênero!";
        return false;
    }

    //Validar nota
    if(nota.trim() == '') {
        divErro.innerHTML = "Informe a nota!";
        return false;
    } else if(nota < 0 || nota > 5) {
        divErro.innerHTML = "A nota deve ser entre 0 e 5!";
        return false;
    }

    return true;
}