public class Minibus extends Kendaraan{
    public Minibus(){
        super();
    }

    public Minibus(int nomor, int tahun, String merk, String supir){
        super(nomor, tahun, merk);
    }

    public Minibus(Minibus m){
        super(m);
    }

    public void printInfo(){
        super.printInfo();
        System.out.println("Kategori: Minibus");
    }

    public double diskon(int lamaSewa){
        return (lamaSewa > 10) ? 0.9 : 1.0;
    }
    
    public double biayaSewa (int lamaSewa){
        if (lamaSewa <= 5){
            return lamaSewa * 50000;
        } else {
            return (5000000 + (lamaSewa - 5) * 500000) * diskon(lamaSewa);
        }
    }
}
