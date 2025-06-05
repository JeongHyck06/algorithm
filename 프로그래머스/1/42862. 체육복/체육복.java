import java.util.*;

public class Solution {
    public int solution(int n, int[] lost, int[] reserve) {
        Arrays.sort(lost);
        Arrays.sort(reserve);

       
        List<Integer> lostList = new ArrayList<>();
        List<Integer> reserveList = new ArrayList<>();

        for (int l : lost) {
            boolean overlap = false;
            for (int i = 0; i < reserve.length; i++) {
                if (l == reserve[i]) {
                    reserve[i] = -1; 
                    overlap = true;
                    break;
                }
            }
            if (!overlap) lostList.add(l);
        }

        
        for (int r : reserve) {
            if (r == -1) continue; 
            if (lostList.contains(r - 1)) {
                lostList.remove(Integer.valueOf(r - 1));
            } else if (lostList.contains(r + 1)) {
                lostList.remove(Integer.valueOf(r + 1));
            }
        }

        return n - lostList.size(); 
    }
}