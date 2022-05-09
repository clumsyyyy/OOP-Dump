/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Praktikum 8 OOP
*/

import java.util.*;
import java.lang.reflect.*;

public class Injector {
    private HashMap<Class<?>, Object> dependency_map = new HashMap<Class<?>, Object>();

    // Menerima sebuah definisi dependencies
    // yang berupa sebuah instansiasi kelas
    // Catatan: Injector bisa menampung lebih dari 1 dependency,
    //          jadi injector bisa menginject banyak sekaligus.
    //          Jika ada 2 objek dengan kelas yang sama,
    //          inject dengan object terakhir yang di add ke daftar dependency
    void addDependencies(Object object){
        this.dependency_map.put(object.getClass(), object);
    }
    /*
      Menginjeksi dependencies yang telah dibuat ke dalam objek
      Injeksi dilakukan dengan mengacu pada dependencies yang ditambah
      pada method addDependencies.
  
      Setiap field di object yang diinject, bila kelasnya
      sudah ditambahkan sebagai dependency, maka akan diset sebagai
      object yang sudah di add didependency.
    */
    void inject(Object object) throws Exception {
        for (Field field: object.getClass().getDeclaredFields()){
            try{
                field.setAccessible(true);
                Class<?> field_type = field.getType();
                if (this.dependency_map.containsKey(field_type)){
                    field.set(object, field_type.cast(this.dependency_map.get(field_type)));
                }
                
            } catch (Exception e){
                // do nothing
            }
        }
    }
  }