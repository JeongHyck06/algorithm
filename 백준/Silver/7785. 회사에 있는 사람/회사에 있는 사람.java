import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        Set<String> check = new HashSet<>();

        for(int i=0; i < n; i++){
            String[] log =  br.readLine(). split(" ");
            String name = log[0];
            String state = log[1];

            if(state.equals("enter")){
                check.add(name);
            }
            else {
                check.remove(name);
            }
        }

        List<String> res = new ArrayList<>(check);
        res.sort(Comparator.reverseOrder());

        for(String name : res){
            System.out.println(name);
        }

    }
}