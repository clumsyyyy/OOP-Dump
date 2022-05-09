public class Application {
    private Window window;

    public Application(String name){
        this.window = new Window(name);
        this.window.draw();
    }

    public void addComponent(Component c){
        this.window.addComponent(c);
    }

    public void draw(){
        this.window.draw();
    }
}
