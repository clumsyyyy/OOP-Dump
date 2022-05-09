/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Tutorial 4: Implementasi Inheritance Cow
*/
public class Cow extends Animal {
  public Cow() {
    super(4);
  }
  
  public void eat(String food) {
    if (food.equals("grass")){
        hungry = false;
    }
  }

  public void run(){
      super.run();
      System.out.println("Cow is running");
  }
}
