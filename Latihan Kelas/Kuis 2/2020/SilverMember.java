public class SilverMember extends Member {

    // default constructor
    public SilverMember(){
        super();
        setState(State.Silver);
    }

    // user-defined constructor
    public SilverMember(int id){
        super(id);
        setState(State.Silver);
    }
}