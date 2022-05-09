import java.util.*;

// ANDA TIDAK BOLEH MENAMBAH, MENGURANGI, ATAU MENGUBAH NAMA ATRIBUT KELAS
class NummerReageerbuisje {
  private Stack<Integer> contents;      // Isi dari NummerReageerbuisje
  private int capacity;                 // Kapasitas maksimal dari NummerReageerbuisje
  private int filledCap;                // Berapa banyak angka yang telah mengisi NummerReageerbuisje
  
  public NummerReageerbuisje() {
    this.contents = new Stack<Integer>(); 
    this.capacity = 3;
    this.filledCap = 0;   // Default konstruktor dengan capacity = 3
  } 

  public NummerReageerbuisje(int cap) {
      this.contents = new Stack<Integer>();
      this.capacity = cap;
      this.filledCap = 0;
    // Modified konstruktor dengan capacity = cap
  }

  public int getCapacity() {
      return this.capacity;
    // getter atribut capacity
  }

  public int getFilledCap() {
      return this.filledCap;
    // getter atribut filledCap
  }

  public void receiveOneSubstance(int substance) {
    // NummerReageerbuisje menerima satu "substance" yaitu angka yang masuk
    if (this.filledCap < this.capacity) {
      this.contents.push(substance);
      this.filledCap += 1;
    }
  } 

  public void pour(NummerReageerbuisje other) {
    while (other.getFilledCap() < other.getCapacity() && this.filledCap > 0) {
        int popped_elmt = this.contents.pop();
        other.receiveOneSubstance(popped_elmt);
        this.filledCap -= 1;
    }
    // NummerReageerbuisje menuangkan isi dari contents ke NummerReageerbuisje other hingga other penuh
    // Note: Angka yang dituangkan terlebih dahulu adalah angka yang paling atas posisinya
  }

  public void pourAllContents() {
    while (this.filledCap > 0){
        int popped_elmt = this.contents.pop();
        System.out.println(popped_elmt);
        this.filledCap -= 1;
    }
    // NummerReageerbuisje ditumpahkan sepenuhnya, sehigga contents kosong
    // Melakukan println untuk setiap elemen yang tumpah berurut dari yang paling awal tumpah
  }

  public void stirSwirl() {
    Stack<Integer> temp = new Stack<Integer>();
    while (this.contents.size() != 0){
        int popped_elmt = this.contents.pop();
        temp.push(popped_elmt);
    }
    this.contents = temp;
    // contents dari NummerReageerbuisje menjadi terbalik urutannya
  }

  public void centrifuge() {
    // contents dari NummerReageerbuisje diurutkan berdasarkan nilai angkanya, 
    // dengan yang terbesar di paling bawah dan yang terkecil di paling atas
    ArrayList<Integer> temp = new ArrayList<Integer>();
    while (this.filledCap > 0){
        int popped_elmt = this.contents.pop();
        this.filledCap -= 1;
        temp.add(popped_elmt);
    }
    Collections.sort(temp, Collections.reverseOrder());
    for (int i = 0; i < temp.size(); i++){
        this.receiveOneSubstance(temp.get(i));
    }
  }
}