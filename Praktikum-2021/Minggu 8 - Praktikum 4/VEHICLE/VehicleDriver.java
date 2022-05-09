public class VehicleDriver {
    public static void main(String[] args){
        Car c = new Car("Toyota", 5);
        for (int i = 0; i < 5; i++){
            c.ride();
        }
        c.ride();

        Bike b = new Bike("honda");
        b.ride();
    }
}