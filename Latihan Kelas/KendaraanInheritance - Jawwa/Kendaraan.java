public class Kendaraan{
    protected int nomor;
    protected int tahun;
    protected String merk;

    public Kendaraan(){
        this.nomor = 0;
        this.tahun = 0;
        this.merk = "XXX";
    }

    public Kendaraan(int nomor, int tahun, String merk){
        this.nomor = nomor;
        this.tahun = tahun;
        this.merk = merk;
    }

    public Kendaraan(Kendaraan k){
        this.nomor = k.nomor;
        this.tahun = k.tahun;
        this.merk = k.merk;
    }

    public void printInfo(){
        System.out.println("Nomor: " + nomor);
        System.out.println("Tahun: " + tahun);
        System.out.println("Merk: " + merk);
    }
}