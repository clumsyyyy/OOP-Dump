class StackMain{
    public static void main(String[] args) {
        Stack s1 = new Stack();
        s1.push(2);
        s1.push(3);
        System.out.println(s1.pop());
     
        Stack s2 = new Stack(15);
        s2.push(5, 6);
        System.out.println(s2.pop());
        System.out.println(s2.pop());
      }
}