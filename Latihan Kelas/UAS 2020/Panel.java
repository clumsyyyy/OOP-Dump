

public class Panel extends Component {

    public Panel(String name){
        super(name);
    }

    public void draw(){
        System.out.println("Drawing Panel " + this.name);
        super.draw();
        System.out.println();
    }
}
