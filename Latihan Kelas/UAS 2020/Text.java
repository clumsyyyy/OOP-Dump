public class Text extends Component{
    private String caption;

    public Text(String name, String caption){
        super(name);
        this.caption = caption;
    }
    public void draw(){
        System.out.println("Drawing Text " + this.caption);
    }
}
