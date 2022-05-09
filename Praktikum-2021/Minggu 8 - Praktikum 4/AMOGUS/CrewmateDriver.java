public class CrewmateDriver {
    public static void main(String[] args) {
    Crewmate a = new Crewmate("Alpha");
    Crewmate b = new Crewmate("Beta");
    b.stab(a);
    a.stab(b);
    System.out.println(b.toString());
  }
}
