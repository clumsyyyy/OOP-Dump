import java.util.*;

/* NIM: 13520124
Nama: Owen Christian Wijaya
Tutorial 5 OOP*/

public class Dompet<T extends Number> {
    private ArrayList<Transaction<T>> transactions;


    public Dompet() {
        // Constructor tanpa parameter, transactions diinisialisasi dengan array list baru
        transactions = new ArrayList<>();
    }


    public Dompet(T initialBalance) {
        // Constructor dengan parameter T initialBalance, inisialisasi transactions dengan array list baru dan tambahkan transaksi tambah dengan value initial balance
        /* contoh transaksi tambah: new Transaction<T>('+', initialBalance) */
        transactions = new ArrayList<>();    
        transactions.add(new Transaction<T>('+', initialBalance));
    }

    public void addMoney(T money) {
        // Buat prosedur addMoney dengan parameter T money, tambahkan transaksi tambah dengan senilai money
        transactions.add(new Transaction<T>('+', money));
    }

    public boolean takeMoney(T money) {
        // Tambahkan transaksi kurang sebesar money (perlu ada pengecekan apakah balance cukup atau tidak)
        // false bila transaksi gagal, true bila berhasil
        Double curr_balance = getBalance();
        if (curr_balance >= money.doubleValue()){
            transactions.add(new Transaction<T>('-', money));
            return true;
        }
        else{
            return false;
        }
    }

    public void setBalance(T balance) {
        // Mengganti transaksi agar bernilai sama dengan balance
        // Tips: inisialisasi ulang transactions, lalu tambahkan transaksi tambah sebanyak balance
        transactions.clear();
        transactions.add(new Transaction<T>('+', balance));
    }

    // Akses nilai Double dilakukan dengan .doubleValue()
    // Contoh: amount.doubleValue()

    public Double getBalance(){
        // Mencari balance dompet dari transaksi dengan cara menghitung total transaksi
        Double curr_balance = 0.0;
        for (Transaction<T> t : transactions){
            if (t.getType() == '+'){
                curr_balance = curr_balance + (t.getAmount().doubleValue());
            }
            else{
                curr_balance = curr_balance - (t.getAmount().doubleValue());
            }
        }
        return curr_balance;
    }

    public void printTransactions() {
        // Print seluruh transaksi yang ada pada array
        // Format: Transactions [indeks + 1]: [tipe transaksi] [amount]
        // Contoh: Transactions 3: + 500
        for (Transaction<T> t : transactions){
            System.out.println("Transactions " + (transactions.indexOf(t) + 1) + ": " + t.getType() + " " + t.getAmount());
        }
    }

    public Double getAverageTransaction() {
        // Mencari rata-rata transaksi (jika tidak ada transaksi, berikan hasil null)
        if (transactions.size() == 0){
            return null;
        }
        else{
            Double curr_balance = getBalance();
            return curr_balance / transactions.size();
        }
    }

    public Double getMinimumTransaction() {
        // Mencari nilai minimum transaksi (jika tidak ada transaksi, berikan hasil null; hanya perlu membandingkan nilainya saja tanpa peduli type)
        if (transactions.size() == 0){
            return null;
        }
        else{
            Double min_transaction = transactions.get(0).getAmount().doubleValue();
            for (Transaction<T> t : transactions){
                if (t.getAmount().doubleValue() < min_transaction){
                    min_transaction = t.getAmount().doubleValue();
                }
            }
            return min_transaction;
        }
    }

    public Double getMaximumTransaction() {
        
        if (transactions.size() == 0){
            return null;
        }
        else{
            Double max_transaction = transactions.get(0).getAmount().doubleValue();
            for (Transaction<T> t : transactions){
                if (t.getAmount().doubleValue() > max_transaction){
                    max_transaction = t.getAmount().doubleValue();
                }
            }
            return max_transaction;
        } // Mencari nilai maksimum transaksi (jika tidak ada transaksi, berikan hasil null; hanya perlu membandingkan nilainya saja tanpa peduli type)
    }
}