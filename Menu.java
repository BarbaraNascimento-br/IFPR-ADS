import atividade_sala.LeituraDeArquivo;

public class Menu {
    public static void main(String[] args) throws Exception{

        LeituraDeArquivo la = new LeituraDeArquivo();

        System.out.println("=============================================");

        System.out.println("1 - A quantidade de vendas: " + la.getQuantidadeDeVenda());
        System.out.printf("2 - A soma das vendas: R$ %.2f\n", la.getSomaDasVendas());
        System.out.printf("3 - Valor total das vendas à vista: R$ %.2f\n", la.getSomaDasVendasVista());
        System.out.printf("4 - Valor total das vendas à prazo: R$ %.2f\n", la.getSomaDasVendasPrazo());

       System.out.println("=============================================");
    }
    
}
