public class Minibus extends KendaraanRental implements Diskon{

    public Minibus(int nomor, String merk, int tahun, int lama_sewa){
        super(nomor, merk, tahun, lama_sewa);
    }

    public void printInfo(){
        System.out.println("Kategori: Minibus");
        System.out.println("No unik: " + this.no_unik);
        System.out.println("Lama sewa: " + this.lama_sewa);
    }

    public double diskon(int hargaNormal){
        return hargaNormal * ((this.lama_sewa > 10) ? 0.8 : 1.9);
    }

    
    public double biayaSewa (){
        if (this.lama_sewa <= 5){
            return this.lama_sewa * 50000;
        } else {
            return diskon(this.lama_sewa * 50000);
        }
    }
}
