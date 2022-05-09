public class TransactionsDriver {
    public static void main(String[] args){
        Dompet<Integer> d = new Dompet<Integer>(500);
        d.addMoney(600);
        d.takeMoney(40);
        System.out.print("Current balance: ");
        System.out.println(d.getBalance());
        System.out.print("Average balance: ");
        System.out.println(d.getAverageTransaction());
        d.printTransactions();
    }
}
