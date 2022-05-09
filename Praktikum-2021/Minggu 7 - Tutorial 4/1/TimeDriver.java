public class TimeDriver {
    public static void main(String[] args){
        Time t1 = new Time(23,58,58);
        Time t2 = new Time(00,02,00);
        Time t3 = t1.add(t2);
        Time t4 = t2.minus(t1);
        t3.printTime();
        t4.printTime();
        t4.setHour(12);
        t4.printTime();
    }
}
