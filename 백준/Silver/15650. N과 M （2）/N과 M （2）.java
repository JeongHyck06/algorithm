import java.io.*;
import java.util.*;

public class Main {
    static int N, M;
    static int[] combination;
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void dfs(int start, int depth) throws IOException {
        if (depth == M) {
            for (int i = 0; i < M; i++) {
                bw.write(combination[i] + " ");
            }
            bw.newLine();
            return;
        }

        for (int i = start; i <= N; i++) {
            combination[depth] = i;
            dfs(i + 1, depth + 1);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        combination = new int[M];

        dfs(1, 0);
        bw.flush();
    }
}