// public class Main {
//     public static void main(String[] args){
//         Application app = new Application("My Application");

//         Panel main_panel = new Panel("Main Panel");
//         Panel label = new Panel("Label");
//         label.addComponent(new Picture("lumba lumba warnet"));
//         label.addComponent(new Text("Desktop"));
//         app.addComponent(main_panel);
        
//         Panel status_bar = new Panel("Status Bar");
//         status_bar.addComponent(new Text("9 items, 1.1 GB available"));
//         app.addComponent(status_bar);
//         app.draw();
//     }
// }

public class Main {
    public static void main(String[] args) {
        /* 3 */
        try{
            TimeOfDay t = new TimeOfDay(0); // yaitu pukul 00:00:00
            System.out.println(t);
            t = new TimeOfDay(77777); // yaitu pukul 21:36:17
            System.out.println(t);
            t = new TimeOfDay(99999); // yaitu pukul 27:46:39??
            System.out.println(t);
        /* 4 */
        } catch (IllegalArgumentException e){
            System.out.println(e);
        } catch (AssertionError a){
            System.out.println(a);
        }
        /* 5 */
    }
}
    