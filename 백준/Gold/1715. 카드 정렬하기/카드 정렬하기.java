import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (int i = 0; i < n; i++) {
            pq.add(Integer.parseInt(br.readLine()));
        }
//        for (int i = 0; i < n; i++) {
//            System.out.println(pq.poll());
//        }

        int comp = 0;

        while (pq.size() > 1) {
            int a = pq.poll();
            int b = pq.poll();
            int sum = a+b;
            comp += sum;
            pq.add(sum);
        }

        System.out.println(comp);
    }
}

