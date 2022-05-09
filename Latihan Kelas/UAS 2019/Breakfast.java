public class Breakfast implements Facility {
    public int price;

    public Breakfast(int price) {
        this.price = price;
    }

    public int getPrice() {
        return this.price;
    }

    public void setPrice(int new_price) {
        this.price = new_price;
    }
    @Override
    public String toString(){
        return "Breakfast - " + this.price;
    }
}
