public class RekeningGiro extends Rekening {
    private boolean penalty;

    public RekeningGiro(String nama, double saldo){
        super(nama, saldo, 0.07);
        this.penalty = this.saldo < 500;
    }

    public void setor(double uang){
        this.saldo += (uang - 0.10);
        this.penalty = this.saldo < 500;
    }

    public void tarik(double uang){
        if (this.saldo >= uang + 0.10){
            this.saldo -= (uang + 0.10);
        }
        this.penalty = this.saldo < 500;
    }

    public void update(){
        this.saldo += this.sukuBunga * this.saldo - this.hitungBiaya();
        if (this.penalty){
            saldo -= 10;
        }
        if (this.saldo >= 500){
            this.penalty = false;
        }
        if (this.saldo < 0){
            this.saldo = 0;
        }
    }
}
