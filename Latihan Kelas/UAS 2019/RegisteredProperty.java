public class RegisteredProperty {
    private Property prop;
    private String date;
    private boolean booked;

    public RegisteredProperty(Property prop, String date) {
        this.prop = prop;
        this.date = date;
        this.booked = false;
    }

    public Property getProp() {
        return prop;
    }
    
    public String getDate(){
        return date;
    }

    public boolean isBooked(){
        return booked;
    }

    public void toggleBooked(){
        this.booked = !this.booked;
    }
}
