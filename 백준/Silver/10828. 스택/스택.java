import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int n = Integer.parseInt(br.readLine());
        int[] stack = new int[10000];
        int size = 0;

        for (int i = 0; i < n; i++) {
            String order = br.readLine();

            if (order.startsWith("push")) {
                int temp = Integer.parseInt(order.split(" ")[1]);
                stack[size] = temp;
                size++;
            } else if (order.equals("pop")) {
                if (size == 0) {
                    sb.append(-1).append("\n");
                } else {
                    sb.append(stack[size - 1]).append("\n");
                    size--;
                }
            } else if (order.equals("size")) {
                sb.append(size).append("\n");
            } else if (order.equals("empty")) {
                sb.append(size == 0 ? 1 : 0).append("\n");
            } else if (order.equals("top")) {
                if (size == 0) {
                    sb.append(-1).append("\n");
                } else {
                    sb.append(stack[size - 1]).append("\n");
                }
            }
        }

        System.out.print(sb);
    }
}