public class Bus extends KendaraanRental {
    private int kapasitas;


    public Bus(int no_unik, String merk, int tahun, int lama_sewa, int kapasitas) {
        super(no_unik, merk, tahun, lama_sewa);
        this.kapasitas = kapasitas;
    }


    public void printInfo(){
        System.out.println("Kategori: Bus");
        System.out.println("Kapasitas: " + kapasitas);
        System.out.println("No unik: " + this.no_unik);
        System.out.println("Lama sewa: " + this.lama_sewa);
    }

    public double biayaSewa(){
        return this.lama_sewa * 100000;
    }
}
