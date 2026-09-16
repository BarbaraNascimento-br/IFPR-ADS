public class Passagem {

    private String id;
    private String origem;
    private String destino;
    private String conexão;
    private float valor;

    public Passagem(String origem, String destino, String conexão, float valor) {
        this.origem = origem;
        this.destino = destino;
        this.conexão = conexão;
        this.valor = valor;
    }

    //Gettes 
    public String getId() {
        return id;
    }
    public String getOrigem() {
        return origem;
    }
    public String getDestino() {
        return destino;
    }
    public String getConexão() {
        return conexão;
    }
    public float getValor() {
        return valor;
    }

    // Settes
    public void setId(String id) {
        this.id = id;
    }
    public void setOrigem(String origem) {
        this.origem = origem;
    }
    public void setDestino(String destino) {
        this.destino = destino;
    }
    public void setConexão(String conexão) {
        this.conexão = conexão;
    }
    public void setValor(float valor) {
        this.valor = valor;
    }

    
    
    
}
