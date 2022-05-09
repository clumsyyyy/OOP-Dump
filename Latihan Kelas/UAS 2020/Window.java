import java.util.ArrayList;

public class Window implements Component {
    private String name;
    private ArrayList<Component> components;

    public Window(String name){
        this.name = name;
        this.components = new ArrayList<Component>();
    }

    public void addComponent(Component c){
        this.components.add(c);
    }

    public void draw(){
        System.out.println("Drawing Window " + this.name);
        for(Component c : components){
            c.draw();
        }
        System.out.println();
    }
}
