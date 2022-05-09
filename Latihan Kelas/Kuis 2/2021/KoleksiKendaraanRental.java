import java.util.ArrayList;
import java.util.List;

class KoleksiKendaraanRental <T extends KendaraanRental> {
    private int kapasitasRentalMaksimum;
    private int kapasitasRentalSaatIni;
    private List<T> koleksi;

    public KoleksiKendaraanRental(){
        this.kapasitasRentalMaksimum = 5;
        this.kapasitasRentalSaatIni = 0;
        this.koleksi = new ArrayList<T>();
    }
    public void tambahKendaraan(T kendaraan){
        if (this.koleksi.size() < this.kapasitasRentalMaksimum){
            this.koleksi.add(kendaraan);
            this.kapasitasRentalSaatIni = this.koleksi.size();
        }
    }

    public void printAll(){
        double total = 0;
        System.out.println(this.koleksi.size());
        for (T k : this.koleksi){
            k.printInfo();
            total += k.biayaSewa();
        }
        System.out.println("Total pemasukan: " + total);
    }
}
