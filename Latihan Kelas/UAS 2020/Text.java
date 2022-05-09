public class Text implements Component{
    private String caption;

    public Text(String caption){
        this.caption = caption;
    }
    public void draw(){
        System.out.println("Drawing Text " + this.caption);
    }
}
