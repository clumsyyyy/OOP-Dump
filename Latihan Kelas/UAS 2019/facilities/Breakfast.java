package facilities;

public class Breakfast implements Facility {
    public int price;

    public Breakfast() {
        this.price = 0;
    }

    public int getPrice() {
        return this.price;
    }

    public void setPrice(int price){
        this.price = price;
    }

    @Override
    public String toString(){
        return "Breakfast - " + this.price;
    }
}
