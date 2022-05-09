public class KoleksiKendaraan {
    private int nEff;
    private int size;
    private Kendaraan[] arr;

    public KoleksiKendaraan() {
        this.nEff = 0;
        this.size = 10;
        this.arr = new Kendaraan[size];
    }

    public KoleksiKendaraan(int size){
        this.nEff = 0;
        this.size = size;
        this.arr = new Kendaraan[size];
    }

    public void printAll(){
        for (int i = 0; i < this.nEff; i++){
            this.arr[i].printInfo();
        }
    }

    public void add(Kendaraan k){
        if (this.nEff + 1 < size){
            arr[nEff] = k;
            nEff++;
        } else {
            System.out.println("Koleksi penuh");
        }
    }

    public void add(KoleksiKendaraan kk){
        if (this.nEff + kk.nEff < size){
            for (int i = 0; i < kk.nEff; i++){
                this.arr[this.nEff] = kk.arr[i];
                this.nEff++;
            }
        } else {
            System.out.println("Ukuran tidak muat untuk menambahkan koleksi kendaraan baru!");
        }
    }
}
