/* NIM: 13520124
Nama: Owen Christian Wijaya
Tutorial 5 OOP*/

public class Main {
    public static void main(String[] args){
        System.out.println("--- Section 1 ---");
        GhostPokemon GP11 = new GhostPokemon();
        FightingPokemon FP11 = new FightingPokemon();
        NormalPokemon NP11 = new NormalPokemon();
        Pokemon P11 = new Pokemon();

        System.out.println(GP11.getName());
        System.out.println(FP11.getName());
        System.out.println(NP11.getName());
        System.out.println(P11.getName());

        GhostPokemon GP12 = new GhostPokemon("Gastly");
        FightingPokemon FP12 = new FightingPokemon("Machop");
        NormalPokemon NP12 = new NormalPokemon("Rattata");
        Pokemon P12 = new Pokemon("Big Boss");

        
        System.out.println(GP12.getName());
        System.out.println(FP12.getName());
        System.out.println(NP12.getName());
        System.out.println(P12.getName());

        GP12.displayClass();
        FP12.displayClass();
        NP12.displayClass();
        P12.displayClass();

        GP12.setUniqueID("G1");
        FP12.setUniqueID(12);
        System.out.println(GP12.getUniqueID());
        System.out.println(FP12.getUniqueID());
        System.out.println("--- Section 2 ---");
        GP12.checkElement();
        FP12.checkElement();
        NP12.checkElement();
        GP12.specialSkill();
        FP12.displayAura();
        GP12.displayAura();
        FP12.specialSkill();

        System.out.println("--- Section 3 ---");
        PokemonAction<GhostPokemon> GPaction = new PokemonAction<GhostPokemon>(GP12);
        PokemonAction<NormalPokemon> NPaction = new PokemonAction<NormalPokemon>(NP12);
        GPaction.displayPokemonClass();
        NPaction.displayPokemonClass();
        System.out.println(GP12.getName() + " vs " + NP12.getName());
        for (int i = 0; i < 7; i++){
            GPaction.attack();
            NPaction.defense();
        }

        for (int i = 0; i < 3; i++){
            NPaction.attack();
            GPaction.defense();
        }
        NPaction.useSkill();
        GPaction.useSkill();
        NPaction.run();

        System.out.println("--- Section 4 ---");
        PokemonAction<FightingPokemon> FPaction = new PokemonAction<FightingPokemon>(FP12);
        PokemonAction<Pokemon> Paction = new PokemonAction<Pokemon>(P12);
        System.out.println("New Battle Found");
        FPaction.displayPokemonClass();
        Paction.displayPokemonClass();
        System.out.println(P12.getName() + " vs " + FP12.getName());
        for (int i = 0; i < 4; i++){
            FPaction.attack();
            Paction.defense();
        }

        for (int i = 0; i < 8; i++){
            Paction.attack();
            FPaction.defense();
        }

        FPaction.useSkill();
        Paction.useSkill();
        FPaction.run();
        System.out.println("All Battle Finished");
    }
}
