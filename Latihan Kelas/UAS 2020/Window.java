public class Window extends Component {

    public Window(String name){
        super(name);
    }

    public void draw(){
        System.out.println("Drawing Window " + this.name); 
        super.draw();
    }
}
