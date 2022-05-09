package CarException;

public class CarExcDriver {
    public static void main(String[] args){
        CarExc car = new CarExc(69);
        try{
            car.fillCar(-69);
            car.drive(10);
        } catch (Exception e){
            System.out.println(e);
        }
    }
}
