public class Picture implements Component {
    private String name;

    public Picture(String name){
        this.name = name;
    }


    public void draw(){
        System.out.println("Drawing Picture " + this.name);
    }
}
