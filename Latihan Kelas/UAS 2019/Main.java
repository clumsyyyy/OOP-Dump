import properties.*;
import system.*;

public class Main {
    public static void main(String[] args){
        Owner owner1 = new Owner("Owner 1");
        for (int i = 1; i <= 10; i++){
            Hotel std = new Hotel(
                "1-STD-" + i,
                "Standard Hotel " + i,
                400000,
                "Standard");

            std.addFacility("Breakfast", 80000);
            std.addFacility("Pool", 0);
            owner1.addProperty(std, "2020-04-29");
        }

        for (int i = 1; i <= 3; i++){
            Hotel dlx = new Hotel(
                "1-DLX-" + i ,
                "Deluxe Hotel " + i,
                600000,
                "Deluxe Hotel");
            dlx.addFacility("Breakfast", 80000);
            dlx.addFacility("Pool", 0);
            owner1.addProperty(dlx, "2020-04-29");
        }

        Owner owner2 = new Owner("Owner 2");
        for (int i = 1; i <= 3; i++){
            Apartment apt = new Apartment(
                "2-APT-" + i,
                "Apartment" + i,
                700000,
                2);

            apt.addFacility("Breakfast", 60000);
            owner2.addProperty(apt, "2020-04-29");
        }

        for (int i = 1; i <= 5; i++){
            Homestay hms = new Homestay(
                "2-HMS-" + i,
                "Homestay " + i,
                500000);
            owner2.addProperty(hms, "2020-04-29");
        }

        User user1 = new User("user1", "user1@gmail.com", "696969696969");
        User user2 = new User("user2", "user2@gmail.com", "420420420420");
       
        owner1.register();
        owner2.register();
        user1.register();
        user2.register();

        user1.search("2020-04-29");

        user1.book("2020-04-29", "1-STD-1");
        user1.book("2020-04-29", "2-HMS-1");

        user1.search("2020-04-29");

        user2.book("2020-04-29", "2-APT-3");

        owner1.notifyUsers("your mom gay");
        owner2.notifyUsers("no u");
    }
}

