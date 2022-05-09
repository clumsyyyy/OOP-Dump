/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Praktikum 8 OOP
*/

import java.lang.reflect.*;

public class LaptopTest{
    private String class_name;

    public LaptopTest(String class_name){
        this.class_name = class_name;
        try {
            Class.forName(class_name);
        } catch (Exception e){
            System.out.println("Tidak ada kelas dengan nama yang diberikan");
        }
    }

    public boolean testMethods(){
        boolean methods_pass = true;

        try {
            Method[] methods = Class.forName(this.class_name).getDeclaredMethods();
            if (methods.length == 1){
                if (!methods[0].getName().equals("getRamSize")){
                    System.out.println("Nama method harus getRamSize");
                    methods_pass = false;
                } 
                if (!methods[0].getReturnType().equals(Integer.class)){
                    System.out.println("Tipe return method harus Integer");
                    methods_pass = false;
                }

            } else {
                System.out.println("Banyaknya method hanya boleh 1");
                methods_pass = false;
            }
        } catch (Exception e){
            methods_pass = false;
        }

        return methods_pass;
    }

    public boolean testFields(){
        boolean fields_pass = true;

        try {
            Field[] fields = Class.forName(this.class_name).getDeclaredFields();
            if (fields.length == 1){
                if (!fields[0].getName().equals("serialNumber")){
                    System.out.println("Nama field harus serialNumber");
                    fields_pass = false;
                }
                if (!fields[0].getType().equals(String.class)){
                    System.out.println("Tipe field harus String");
                    fields_pass = false;
                }
            } else {
                System.out.println("Banyaknya field hanya boleh 1");
                fields_pass = false;

            }
        } catch (Exception e){
            fields_pass = false;
        }

        return fields_pass;
    }
}