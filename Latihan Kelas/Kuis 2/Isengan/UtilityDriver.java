public class UtilityDriver {
    public static void main(String[] args) {
        Integer[] arr = {1, 2, 3, 4, 5};
        System.out.println(Utility.join(arr));
        System.out.println(Utility.join(Utility.repeat(arr, 3)));
        System.out.println(Utility.sum(arr));
        System.out.println(Utility.sum(Utility.repeat(arr, 3)));
    }
}
