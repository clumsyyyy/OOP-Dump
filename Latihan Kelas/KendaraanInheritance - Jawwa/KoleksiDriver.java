public class KoleksiDriver {
    public static void main(String[] args){
        KoleksiKendaraan k = new KoleksiKendaraan();
        Mobil m1 = new Mobil(1, 2000, "Toyota", "Owen");
        Minibus mn1 = new Minibus(2, 2005, "Honda", "Amar");
        k.add(m1);
        k.add(mn1);
        k.printAll();
    }
}
