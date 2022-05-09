import java.util.*;

/* NIM: 13520124
Nama: Owen Christian Wijaya
Praktikum 5 */

public class Worker {
	public static int run(List<Integer> durations, int machineCount) {
		// implementation here
        int N = durations.size();
        int M = machineCount;
        int count = 0;
        ArrayList<Integer> working = new ArrayList<Integer>();

        for (int i = 0; i < N; i++){
            if (working.size() < M){
                working.add(durations.get(i));
            } else {
                int minimum = Collections.min(working);
                int minIndex = working.indexOf(minimum);
                count += minimum;
                for (int j = 0; j < working.size(); j++){
                    working.set(j, working.get(j) - minimum);
                }
                working.set(minIndex, durations.get(i));
            }
        }

        count += Collections.max(working);
        return count;
	}
}