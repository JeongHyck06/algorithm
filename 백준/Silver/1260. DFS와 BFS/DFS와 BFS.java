//  package boj_1260;

import java.io.*;
import java.util.*;

public class Main {

    static int N, M, V;
    static int[][] adjMatrix;
    static boolean[] visited;
    static List<Integer> order;
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        V = Integer.parseInt(st.nextToken());

        adjMatrix = new int[N + 1][N + 1];
        visited = new boolean[N + 1];
        order = new ArrayList<>();

        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            adjMatrix[a][b] = 1;
            adjMatrix[b][a] = 1;
        }

        dfs(V);
        printOrder();

        visited = new boolean[N + 1];
        order = new ArrayList<>();

        bfs(V);
        printOrder();
        
        bw.flush();
        bw.close();
    }

    static void dfs(int v) {
        visited[v] = true;
        order.add(v);

        for (int i = 1; i <= N; i++) {
            if (adjMatrix[v][i] == 1 && !visited[i]) {
                dfs(i);
            }
        }
    }

    static void bfs(int s) {
        Queue<Integer> q = new LinkedList<>();
        visited[s] = true;
        q.offer(s);

        while (!q.isEmpty()) {
            int cur = q.poll();
            order.add(cur);

            for (int i = 1; i <= N; i++) {
                if (adjMatrix[cur][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    q.offer(i);
                }
            }
        }
    }

    static void printOrder() throws IOException {
        for (int v : order) {
            bw.write(v + " ");
        }
        bw.newLine();
    }
}