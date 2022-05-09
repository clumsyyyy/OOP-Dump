import javafx.scene.shape.Box;

public class TrickySwapTest {
    public static class Point { 
        public int x; 
        public int y; 
        public Point(int x, int y) { 
            this.x = x; 
            this.y = y; 
        }
    }

    public static class Angka{
        public int x;
        public Angka(int x){
            this.x = x;
        }
    }

    
    public static void jumlahObj(Angka a, Angka b){
        a.x += b.x;
        int temp = a.x;
        a.x = b.x;
        b.x = temp;
    }


    public static void trickySwap(Point arg1, Point arg2) {
        arg1.x = 100;
        arg1.y = 100;
        Point temp = arg1;
        arg1 = arg2;
        // arg2 = temp;
    }
    public static void jumlah(int a, int b) {
        a += b;
    }


    public static void main(String[] args){
        Point p1 = new Point(1,1);
        Point p2 = new Point(1,1);
        System.out.println("P1: X=" + p1.x + " Y=" +p1.y);
        System.out.println("P2: X=" + p2.x + " Y=" +p2.y);
        trickySwap(p1, p2);
        System.out.println("After tricky swap:"); 
        System.out.println("P1: X=" + p1.x + " Y=" +p1.y);
        System.out.println("P2: X=" + p2.x + " Y=" +p2.y);

        int a = 2;
        int b = 3;
        System.out.println(a);
        jumlah(a, b);
        System.out.println(a);

        Angka as = new Angka(2);
        Angka bs = new Angka(3);
        System.out.println(as.x);
        jumlahObj(as, bs);
        System.out.println(as.x);

    }
}
