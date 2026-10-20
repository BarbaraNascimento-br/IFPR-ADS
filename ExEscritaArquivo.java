import java.io.BufferedWriter;
import java.io.FileWriter;

public class ExEscritaArquivo {
    public static void main(String[] args) throws Exception{
        String nomeArgSaida = "arqSaida.csv";

        BufferedWriter arqGravacao = new BufferedWriter(
            new FileWriter(nomeArgSaida));

        String linha = "Produto;Preço;Estoque";
        arqGravacao.write(linha);
        arqGravacao.newLine();
        
        String nomeProduto = "Mouse Dell d310";
        String preco = "119,25";
        String estoque = "7";

        linha = nomeProduto + ";" + preco + ";" + estoque;
        arqGravacao.write(linha);
        arqGravacao.newLine();

        String nomeProduto2 = "cabo HTMI 2m";
        String preco2 = "75,00";
        String estoque2 = "10";

        linha = nomeProduto2  + ";" + preco2 + ";" + estoque2;
        arqGravacao.write(linha);
        arqGravacao.newLine();



        arqGravacao.close();




    }
    
}
