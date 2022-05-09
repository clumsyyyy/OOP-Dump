/*
NIM: 13520124
Nama: Owen Christian Wijaya
Tanggal: Jumat, 22 April 2022
*/

public class Main {
    public static void main(String[] args){
        KoleksiKendaraanRental<Minibus> rentalMiniBus = new KoleksiKendaraanRental<Minibus>();
        KoleksiKendaraanRental<Bus> rentalBus = new KoleksiKendaraanRental<Bus>();
        KoleksiKendaraanRental<Mobil> rentalMobil = new KoleksiKendaraanRental<Mobil>();
        rentalMiniBus.tambahKendaraan(new Minibus(1, "Toyota", 2010, 1));
        rentalMiniBus.printAll();
        rentalBus.tambahKendaraan(new Bus(1, "Toyota", 2010, 2, 50 ));
        rentalBus.printAll();
        rentalMobil.tambahKendaraan(new Mobil(1, "Toyota", 2010, 3, 5));
        rentalMobil.printAll();
    }

}
