abstract class KendaraanRental {
    protected int no_unik;
    protected String merk;
    protected int tahun;
    protected int lama_sewa;

    public KendaraanRental(int no_unik, String merk, int tahun, int lama_sewa){
        this.no_unik = no_unik;
        this.merk = merk;
        this.tahun = tahun;
        this.lama_sewa = lama_sewa;
    }
    abstract public void printInfo();
    abstract public double biayaSewa();
}
