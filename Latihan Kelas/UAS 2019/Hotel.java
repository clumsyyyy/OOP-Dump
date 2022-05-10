public class Hotel extends Property{
    private String type;

    public Hotel(String id, String name, int price, String type){
        super(id, name, price);
        this.type = type;
    }
    
    public String toString(){
        return type + " - " + super.toString();
    }
}
