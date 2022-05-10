package system;
public class User {
    private String name;
    private String email;
    private String num;

    public User(String name, String email, String num) {
        this.name = name;
        this.email = email;
        this.num = num;
    }

    @Override
    public String toString(){
        return "Name: " + this.name + "\nEmail: " + this.email + "\nPhone: " + this.num;
    }

    public void search(String date){
        Registry.getInstance().searchByDate(date);
    }

    public void register(){
        Registry.getInstance().addUser(this);
    }

    public void receiveNotification(String notif){
        System.out.println(notif);
    }

    public void book(String date, String prop_id){
        try{
            Registry.getInstance().bookProperty(date, prop_id, this);
        } catch (Exception e){
            System.out.println(e);
        }
    }
}
