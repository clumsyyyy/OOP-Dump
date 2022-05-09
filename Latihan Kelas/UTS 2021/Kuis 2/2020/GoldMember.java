public class GoldMember extends Member {

    // default constructor
    public GoldMember(){
        super();
        setState(State.Gold);
    }

    // user-defined constructor
    public GoldMember(int id){
        super(id);
        setState(State.Gold);
    }
}
