import java.util.ArrayList;

public class Registry{
    private static Registry reg = null;
    private ArrayList<Owner> owners;
    private ArrayList<User> users;

    private Registry(){
        this.owners = new ArrayList<Owner>();
        this.users = new ArrayList<User>();
    }

    public static Registry getInstance(){
        if (reg == null){
            reg = new Registry();
        }
        return reg;
    }

    public void addOwner(Owner o){
        this.owners.add(o);
    }

    public void addUser(User u){
        this.users.add(u);
    }

    public void searchByDate(String date){
        int count = 0;
        for (Owner o : owners){
            for (RegisteredProperty rp : o.getPropertyList()){
                if (rp.getDate().equals(date) && !rp.isBooked()){
                    count += 1;
                    System.out.println(count + ". " + o.getOwnerName() + " - " + rp.getProp().getID() + " - " + rp.getProp().getName());
                }
            }
        }
        if (count == 0){
            System.out.println("No property available for the date :(");
        }
        System.out.println(count + " properties found.\n");
    }

    public void bookProperty(String date, String prop_id, User user) throws Exception{
        boolean found = false;
        for (Owner o : owners){
            for (RegisteredProperty rp : o.getPropertyList()){
                if (rp.getDate().equals(date) && rp.getProp().getID().equals(prop_id) && !rp.isBooked()){
                    rp.toggleBooked();
                    o.addUser(user);
                    System.out.println("Reservasi berhasil! \n" + rp.getProp());
                    found = true;
                }
            }
        }
        if (!found){
            throw new Exception("no room ");
        }
    }
}