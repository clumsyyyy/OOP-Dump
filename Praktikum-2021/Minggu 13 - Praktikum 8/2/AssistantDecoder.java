/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Praktikum 8 OOP
*/

import java.lang.reflect.*;

public class AssistantDecoder {
    private Assistant assistant;

    AssistantDecoder(Assistant assistant) {
        this.assistant = assistant;
    }
  
    public void addPersonToRecommendations(String name) throws Exception {
        Method add_method = this.assistant.getClass().getDeclaredMethod("addPersonToRecommendations", String.class);
        add_method.setAccessible(true);
        add_method.invoke(this.assistant, name);
    }
  
    public int getSalary() throws Exception {
        Field salary = this.assistant.getClass().getDeclaredField("salary");
        salary.setAccessible(true);
        return (int) salary.get(this.assistant);
    }
  }