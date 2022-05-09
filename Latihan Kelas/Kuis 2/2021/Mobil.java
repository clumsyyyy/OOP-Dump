public class Mobil extends KendaraanRental {
    private int rateSupir;

    public Mobil(int nomor, String merk, int tahun, int lama_sewa, int rateSupir){
        super(nomor, merk, tahun, lama_sewa);
        this.rateSupir = rateSupir;

    }

    public void printInfo(){
        System.out.println("Kategori: Mobil");
        System.out.println("No unik: " + this.no_unik);
        System.out.println("Lama sewa: " + this.lama_sewa);

    }

    public double biayaSewa(){
        return this.lama_sewa * 50000 * (this.rateSupir / 5);
    }
}
