package atividade_sala;

import java.io.BufferedReader;
import java.io.FileReader;

public class LeituraDeArquivo{

    private String nomeDoArquivoDeEntrada = "vendas.csv";
    private String linha; 
    private int quantidadeDeVenda = 0;
    private double somaDasVendas = 0;
    private double somaDasVendasVista = 0;
    private double somaDasVendasPrazo = 0;


    public LeituraDeArquivo() {
    }

    public void leituraTotal() throws Exception{

        BufferedReader arquivoDeleitura = new BufferedReader(new FileReader(nomeDoArquivoDeEntrada));
        
        while ((linha = arquivoDeleitura.readLine()) != null) {
            System.out.println(linha);

        }

        arquivoDeleitura.close();
    }

    //Quantidade de vendas 
    public int getQuantidadeDeVenda() throws Exception{

        BufferedReader arquivoDeleitura = new BufferedReader(new FileReader(nomeDoArquivoDeEntrada));
        linha = arquivoDeleitura.readLine();
        while ((linha = arquivoDeleitura.readLine()) != null) {
            quantidadeDeVenda++;
        }
        arquivoDeleitura.close();
        return quantidadeDeVenda;
    }

    public double getSomaDasVendas() throws Exception{

        BufferedReader arquivoDeleitura = new BufferedReader(new FileReader(nomeDoArquivoDeEntrada));
        linha = arquivoDeleitura.readLine();
        while ((linha = arquivoDeleitura.readLine()) != null) {
            String[] vetCampo = linha.split(";");
            vetCampo[2] = vetCampo[2].replace(",", ".");
            somaDasVendas = Double.parseDouble(vetCampo[2]) + somaDasVendas;
        }

        arquivoDeleitura.close();
        return somaDasVendas;
    }

    public double getSomaDasVendasVista() throws Exception{

        BufferedReader arquivoDeleitura = new BufferedReader(new FileReader(nomeDoArquivoDeEntrada));
        linha = arquivoDeleitura.readLine();
        while ((linha = arquivoDeleitura.readLine()) != null) {
            String[] vetCampo = linha.split(";");
            vetCampo[2] = vetCampo[2].replace(",", ".");

            
            if(vetCampo[3].equals("V")){
                somaDasVendasVista = Double.parseDouble(vetCampo[2]) + somaDasVendasVista;
            }
            
        }

        arquivoDeleitura.close();
        return somaDasVendasVista;
    }

    public double getSomaDasVendasPrazo() throws Exception{

        BufferedReader arquivoDeleitura = new BufferedReader(new FileReader(nomeDoArquivoDeEntrada));
        linha = arquivoDeleitura.readLine();
        while ((linha = arquivoDeleitura.readLine()) != null) {
            String[] vetCampo = linha.split(";");
            vetCampo[2] = vetCampo[2].replace(",", ".");

            
            if(vetCampo[3].equals("P")){
                somaDasVendasPrazo = Double.parseDouble(vetCampo[2]) + somaDasVendasPrazo;
            }
            
        }

        arquivoDeleitura.close();
        return somaDasVendasPrazo;
    }



}
