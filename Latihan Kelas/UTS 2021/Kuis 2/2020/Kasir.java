import java.util.List;
import java.util.ArrayList;
import java.time.Duration;
import java.time.LocalTime;


public class Kasir{
    private int id_kasir;
    private List<? extends Member> antrian;
    private boolean is_gold;
    private boolean is_shift_ended;

    public Kasir(List<? extends Member> antrian){
        this.id_kasir = 0;
        this.antrian = antrian;
        this.is_gold = false;
        this.is_shift_ended = Duration.between(LocalTime.now(), LocalTime.of(20, 0)).toMinutes() < 0;
    }

    public Kasir(int id_kasir, List<? extends Member> antrian, boolean is_gold){
        this.id_kasir = id_kasir;
        this.antrian = antrian;
        this.is_gold = is_gold;
        this.is_shift_ended = Duration.between(LocalTime.now(), LocalTime.of(20, 0)).toMinutes() < 0;
    }

    public void setAntrianGold(List<GoldMember> antrian_gold){
        if (this.is_gold){
            this.antrian = antrian_gold;
        } else {
            System.out.println("Kasir ini tidak menerima antrian gold");
        }
    }

    public List<GoldMember> pisahkanAntrianGold(){
        List<GoldMember> res = new ArrayList<GoldMember>();
        for (Member m : this.antrian){
            if (m.getState().equals(State.Gold)){
                res.add((GoldMember) m);
                this.antrian.remove(m);
            }
        }
        return res;
    }

    public void updateShift(){
        this.is_shift_ended = Duration.between(LocalTime.now(), LocalTime.of(20, 0)).toMinutes() < 0;
        if (this.is_shift_ended){
            System.out.println("Shift has ended!");
        } else {
            System.out.println("Nope, shift hasn't ended yet");
        }
    }

    public boolean shiftEnded(){
        return this.is_shift_ended;
    }


}