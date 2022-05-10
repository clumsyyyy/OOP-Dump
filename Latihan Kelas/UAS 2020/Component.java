import java.util.ArrayList;

public class Component {
    protected String name;
    protected ArrayList<Component> components;

    public Component(String name){
        this.name = name;
        this.components = new ArrayList<Component>();
    }

    public void addComponent(Component c){
        this.components.add(c);
    }

    public void draw(){
        for (Component c : components){
            c.draw();
        }
        System.out.println();
    };
}