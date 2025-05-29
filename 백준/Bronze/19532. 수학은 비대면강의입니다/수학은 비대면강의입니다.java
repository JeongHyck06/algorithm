import java.io.*;
import java.util.*;

public class Main {

    public static int n;
    public static int m; // 자연수 M

    public static int[] arr;
    public static boolean[] visit;
    public static StringBuilder sb = new StringBuilder();
    public static void equation(int arr[]) {

            for(int x = -999; x <= 999; x++) {
                for(int y = -999; y <= 999; y++) {
                    if (arr[0] * x + arr[1] * y == arr[2]) {
                        if(arr[3] * x + arr[4] * y == arr[5]) {
                            System.out.println(x + " " + y);
                        }
                    }
                }
            }

    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int[] arr = new int[6];
        for (int i = 0; i < 6; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        equation(arr);

    }
}