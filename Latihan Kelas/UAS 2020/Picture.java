public class Picture extends Component {
    public Picture(String name){
        super(name);
    }

    public void draw(){
        System.out.println("Drawing Picture " + this.name);
    }
}
