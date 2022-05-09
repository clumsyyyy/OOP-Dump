import java.util.ArrayList;

class ScraperThread implements Runnable {
    private Website NIM_WEBSITE;
    private ThreadListener listener;
    private String prefix;
    private String year;
    private int suffixFirst;
    private int suffixLast;

    public ScraperThread(Website NIM_WEBSITE, ThreadListener listener, String prefix, String year, int suffixFirst, int suffixLast) {
        this.NIM_WEBSITE = NIM_WEBSITE;
        this.listener = listener;
        this.prefix = prefix;
        this.year = year;
        this.suffixFirst = suffixFirst;
        this.suffixLast = suffixLast;
    }

    public void run(){
        ArrayList<Student> res = new ArrayList<Student>();
        for (int i = suffixFirst; i <= suffixLast; i++) {
            String NIM = prefix + year + String.format("%03d", suffixFirst);
            res.add(this.NIM_WEBSITE.getStudentDataByNIM(NIM));
        }
        this.listener.onSuccess(res);
    }
}
