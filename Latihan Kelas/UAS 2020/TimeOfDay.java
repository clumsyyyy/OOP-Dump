public class TimeOfDay {
    int h, m, s;
    /**
    * Menciptakan objek TimeOfDay jika diketahui detik ke-berapa sejak tengah malam (00:00:00).
    *
    * @param seconds harus berada di antara 0 (00:00:00) dan 86399 (23:59:59), inklusif [precondition]
    * @throws IllegalArgumentException jika input tidak valid
    *
    * 0≤h≤23; 0≤m,s≤59; h*3600 + m*60 + s == seconds [post-condition]
    */
    public TimeOfDay(int seconds) throws IllegalArgumentException, AssertionError { /* 0 */
    /* 1 */
        assert(seconds >= 0 && seconds <= 86399) : "yro mom gay";
        // if (seconds < 0 || seconds > 86399){
        //     throw new IllegalArgumentException("Input tidak valid!");
        // }
        h = seconds / 3600;
        int rem = seconds % 3600;
        m = rem / 60;
        s = rem % 60;
    /* 2 */
        assert (h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (s >= 0 && s <= 59) && (h * 3600 + m * 60 + s == seconds);
    }

    @Override 
    public String toString() { 
        return String.format("%02d:%02d:%02d", h, m, s); 
    }
}
