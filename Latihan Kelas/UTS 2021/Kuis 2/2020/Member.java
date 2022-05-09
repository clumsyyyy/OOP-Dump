public class Member{

    protected int id;
    protected State state;


    // default constructor
    public Member(){
        this.id = 0;
        this.state = State.New;
    }

    // user-defined constructor
    public Member(int id){
        this.id = id;
        this.state = State.New;
    }

    // get ID
    public int get_id(){
        return this.id;
    }

    public void setState(State state){
        this.state = state;
    }
    
    public State getState(){
        return this.state;
    }

    public String toString(){
        return "ID: " + this.id + " State: " + this.state;
    }
}