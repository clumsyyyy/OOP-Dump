package properties;
public class Apartment extends Property{
    private int rooms;

    public Apartment(String id, String name, int price, int rooms){
        super(id, name, price);
        this.rooms = rooms;
    }

    @Override
    public String toString(){
        return "Apartment - "+ super.toString() + "Rooms: " + this.rooms + "\n";
    }
}
