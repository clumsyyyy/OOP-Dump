package system;
import java.util.ArrayList;

import properties.Property;
import properties.RegisteredProperty;

public class Owner {
    private String owner_name;
    private ArrayList<User> users;
    private ArrayList<RegisteredProperty> prop_list;

    public Owner(String owner_name){
        this.owner_name = owner_name;
        this.users = new ArrayList<User>();
        this.prop_list = new ArrayList<RegisteredProperty>();
    }

    public String getOwnerName(){
        return this.owner_name;
    }

    public void register(){
        Registry.getInstance().addOwner(this);
    }

    public void addUser(User u){
        this.users.add(u);
    }
    
    public void notifyUsers(String notif){
        for (User u : this.users){
            u.receiveNotification(owner_name + ": " + notif);
        }
    }

    public void addProperty(Property p, String date){
        this.prop_list.add(new RegisteredProperty(p, date));
    }

    public ArrayList<RegisteredProperty> getPropertyList(){
        return this.prop_list;
    }
}
