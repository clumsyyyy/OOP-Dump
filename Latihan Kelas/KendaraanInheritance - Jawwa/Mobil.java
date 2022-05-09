public class Mobil extends Kendaraan {
    private String supir;

    public Mobil() {
        super();
        this.supir = "XXX";
    }

    public Mobil(int nomor, int tahun, String merk, String supir){
        super(nomor, tahun, merk);
        this.supir = supir;
    }

    public Mobil(Mobil m){
        super(m);
        this.supir = m.supir;
    }

    public void printInfo(){
        super.printInfo();
        System.out.println("Kategori: Mobil");
        System.out.println("Supir: " + supir);
    }

    public int biayaSewa(int lamaSewa){
        return lamaSewa * 50000;
    }
}
