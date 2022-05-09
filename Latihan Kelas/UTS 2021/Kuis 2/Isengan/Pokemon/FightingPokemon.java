package Pokemon;
import java.io.*;

/* NIM: 13520124
Nama: Owen Christian Wijaya
Tutorial 5 OOP*/


// Buat kelas FightingPokemon yang merupakan turunan dari kelas Pokemon dan mengimplementasi interface ElementalType<Integer>

// Atribut tolong dilihat sendiri pada diagram kelas

// Buat constructor tanpa parameter, meng-assign "Fighting" ke atribut elementalName dan mencetak "ctor1 FightingPokemon" ke layar

// Buat constructor dengan parameter String name, meng-assign "Fighting" ke atribut elementalName dan mencetak "ctor2 FightingPokemon" ke layar

// Buat prosedur checkElement yang mencetak "[name] have [elementName] type" ke layar

// Override prosedur displayClass yang mencetak "Sub Class FightingPokemon"

// Realisasi prosedur displayAura, mencetak "There is fighting spirit around"

// Realisasi prosedur specialSkill, mencetak "Special skill berserk"

// Realisasi setUniqueID dan getUniqueID

class FightingPokemon extends Pokemon implements ElementalType<Integer> {
    private Integer id;
    private String elementalName;

    public FightingPokemon(){
        super();
        this.elementalName = "Fighting";
        System.out.println("ctor1 FightingPokemon");
    }

    public FightingPokemon(String name){
        super(name);
        this.elementalName = "Fighting";
        System.out.println("ctor2 FightingPokemon");
    }

    public void checkElement(){
        System.out.println(this.name + " have " + this.elementalName + " type");
    }

    public void displayClass(){
        System.out.println("Sub Class FightingPokemon");
    }

    public void displayAura(){
        System.out.println("There is fighting spirit around");
    }

    public void specialSkill(){
        System.out.println("Special skill berserk");
    }

    public void setUniqueID(Integer id){
        this.id = id;
    }

    public Integer getUniqueID(){
        return this.id;
    }
}