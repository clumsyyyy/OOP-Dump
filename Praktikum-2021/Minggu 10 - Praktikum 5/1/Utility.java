
/*
NIM: 13520124
Nama: Owen Christian Wijaya
Praktikum 5*/
public class Utility{
    
    public static <T> void swap(T[] arr, int i, int j) {
        if (i >= 0 && i < arr.length && j >= 0 && j < arr.length) {
            T temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    public static <T> T[] repeat(T[] arr, int N){
        T[] new_arr = (T[]) new Object[N * arr.length];
        for (int i = 0; i < N; i++){
            for (int j = 0; j < arr.length; j++) {
                new_arr[i * arr.length + j] = arr[j];
            }
        }
        return new_arr;
    }

    public static <T> String join(T[] arr){
        String result = "";
        for (int i = 0; i < arr.length; i++){
            // if (arr[i].equals(true)){
            //     result += "true";
            // } else if (arr[i].equals(false)){
            //     result += "false";
            // } else if (arr[i].equals(null)){
            //     result += "null";
            // } else{
            //     result += arr[i].toString();
            // }
            result += arr[i];

            if (i < arr.length - 1) {
                result += ",";
            }
        }
        return result;
    }

    public static <T extends Number> double sum(T[] arr){
        double result = 0.0;
        for (int i = 0; i < arr.length; i++){
            result += arr[i].doubleValue();
        }
        return result;
    }
}
