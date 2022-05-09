import java.util.ArrayList;

public class Panel implements Component {
    private String name;
    private ArrayList<Component> components;

    public Panel(String name){
        this.name = name;
        this.components = new ArrayList<Component>();
    }

    public void addComponent(Component c){
        this.components.add(c);
    }

    public void draw(){
        System.out.println("Drawing Panel " + this.name);
        for (Component c : components){
            c.draw();
        }
        System.out.println();
    }
}
