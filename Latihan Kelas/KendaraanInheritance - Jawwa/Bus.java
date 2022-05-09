public class Bus extends Kendaraan {
    private int kapasitas;

    public Bus() {
        super();
        this.kapasitas = 0;
    }

    public Bus(int nomor, int tahun, String merk, int kapasitas) {
        super(nomor, tahun, merk);
        this.kapasitas = kapasitas;
    }

    public Bus(Bus b) {
        super(b);
        this.kapasitas = b.kapasitas;
    }

    public void printInfo(){
        super.printInfo();
        System.out.println("Kategori: Bus");
        System.out.println("Kapasitas: " + kapasitas);
    }

    public int biayaSewa(int lamaSewa){
        return lamaSewa * 100000;
    }
}
