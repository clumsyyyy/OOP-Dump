public class Crewmate {
    public String name;
    public boolean isDead;
    private int stabCount;
    static int id = 1;

    public Crewmate(){
        this.name = "Crewmate " + id;
        this.isDead = false;
        this.stabCount = 0;
        id++;
    }
    public Crewmate(String name) {
        this.name = name;
        this.isDead = false;
        this.stabCount = 0;
        id++;
    }

    public void stab(Crewmate victim){
        if (isDead){
            System.out.println(this.name + " is dead");
        } else {
            victim.isDead = true;
            this.stabCount++;
            System.out.println(this.name + " stabs " + victim.name);
        }
    }

    public String toString(){
        if (isDead){
            return (this.name + " is dead");
        } else if (!isDead && stabCount > 0){
            return (this.name + " is sus");
        } else {
            return (this.name + " is cool");
        }
    }
}
