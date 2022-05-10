import java.util.ArrayList;

public class Property{
    private String id;
    private String name;
    private int price;
    private int daily_price;
    private ArrayList <Facility> facilities;

    public Property(String id, String name, int price){
        this.id = id;
        this.name = name;
        this.price = price;
        this.daily_price = price;
        this.facilities = new ArrayList<Facility>();
    }

    public String getID(){
        return this.id;
    }

    public String getName(){
        return this.name;
    }

    public int getPrice(){
        return this.price;
    }

    public void setPrice(int new_price){
        this.price = new_price;
    }

    public void addFacility(Facility fac){
        this.facilities.add(fac);
        this.daily_price += fac.getPrice();
    }

    @Override
    public String toString(){
        String desc = this.id + " - " + this.name 
        + "\nPrice: " + this.price;
        if (this.facilities.size() > 0)
            desc += "\nFacilities: ";
        for (Facility f: facilities){
            desc += "\n- " + f.toString();
        }
        desc += "\nTotal price per day: " + this.daily_price;
        return desc + "\n";
    }
}