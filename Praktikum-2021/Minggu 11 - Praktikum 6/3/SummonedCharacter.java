import java.util.List;
import java.util.ArrayList;
/* NIM: 13520124
Nama: Owen Christian Wijaya
Praktikum 5 OOP
 */
class SummonedCharacter extends Character implements ISummoned{
    private int level;
    private int exp;
    private int base_atk;
    private int base_hp;
    private List<Spell> listOfSpells;
    /**
     * Konstruktor yang menerima argumen
     * - Objek karakter yang disummon
     * - integer level
     * - integer exp
     */
    public SummonedCharacter(Character character, int level, int exp){
        super(character.getName(), character.getAttackValue(), character.getHpValue(), character.getAttackUpValue(), character.getHealthUpValue());
        this.level = level;
        this.exp = exp;
        this.base_atk = character.getAttackValue();
        this.base_hp = character.getHpValue();
        this.listOfSpells = new ArrayList<Spell>();
    }
    public int getLevel(){
        return this.level;
    }

    public int getExp(){
        return this.exp;
    }

    public void addSpell(Spell s){
        this.listOfSpells.add(s);
    }

    public List<Spell> getActiveSpells() {
        return this.listOfSpells;
    }
    /* Meningkatkan level */
    public void levelUp(){
        this.level += 1;
        this.exp = 0;
        base_atk += this.getAttackUpValue();
        base_hp += this.getHealthUpValue();
    }

    public void render(){
        System.out.println("Nama: " + this.getName());
        System.out.println("Level: " + this.getLevel());
        System.out.println("Exp: " + this.getExp());
        System.out.println("Atk: " + this.base_atk);
        System.out.println("Hp: " + this.base_hp);
        System.out.println("Memiliki " + this.listOfSpells.size() +" spell aktif:");
        for (Spell s : this.listOfSpells){
            System.out.println("- " + s.getName());
        }
        System.out.println();
    }



}
