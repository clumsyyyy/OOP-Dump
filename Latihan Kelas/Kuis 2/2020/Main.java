import java.util.ArrayList;
import java.util.List;


public class Main {
    public static void main(String[] args){
        List<Member> member_list = new ArrayList<>();
        member_list.add(new GoldMember(2));
        member_list.add(new GoldMember(3));
        member_list.add(new SilverMember(4));
        Kasir kasirgold = new Kasir(1, member_list, true);
        System.out.println("sy turu");
        List<GoldMember> gmember_list = new ArrayList<>();
        if(!kasirgold.shiftEnded()){
            gmember_list = kasirgold.pisahkanAntrianGold();
        }
        System.out.println(gmember_list.size());
        for (GoldMember gm : gmember_list){
            System.out.println(gm);
        }

    }
}
