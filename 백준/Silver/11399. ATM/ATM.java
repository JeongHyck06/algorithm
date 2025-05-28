import java.io.*;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        StringTokenizer st = new StringTokenizer(br.readLine());
        int[] arr = new int[n];

        for(int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(arr);

        int cost = 0;
        int ans = 0;

        for(int num : arr) {
            cost += num;
            ans += cost;
        }

        System.out.println(ans);

//        int[][] time = new int[n][2];
//
//        for(int i=0; i<n; i++) {
//            StringTokenizer st = new StringTokenizer(br.readLine());
//            time[i][0] = Integer.parseInt(st.nextToken());
//            time[i][1] = Integer.parseInt(st.nextToken());
//        }
//
//            Arrays.sort(time, (start, end) ->{
//                if(start[0] == start[1] )
//        };
//
//


    }
}

