import java.io.*;
import java.util.*;

public class Main {
    static int total = 0;
    static int a, b;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] arr = new int[9];

        for (int i = 0; i < 9; i++) {
            arr[i] = Integer.parseInt(br.readLine());
            total += arr[i];
        }
        Arrays.sort(arr);

        for(int i = 0; i < 8; i++) {
            for(int j = i+1; j < 9; j++) {
                if(total - arr[i] - arr[j] == 100) {
                    a = arr[i];
                    b = arr[j];
                    break;
                }
                if (a != 0 && b != 0) {
                    break;
                }
            }
        }
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < 9; i++) {
            if (arr[i] != a && arr[i] != b) {
                sb.append(arr[i]).append("\n");
            }
        }
        System.out.println(sb);
    }
}