package VehicleInterface;
/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Tutorial 4: Implementasi Interface Bike
*/

public class Bike extends NonMotorizedVehicle implements Rideable{
    public Bike(){
        this.name = "Bike";
    }

    public Bike(String name){
        this.name = name;
    }

    public String getName(){
        return this.name;
    }

    public void ride(){
        System.out.println("Riding a " + this.name);
    }
}
