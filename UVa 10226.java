/**
 * Created by Win7 on 7/25/2016.
 */
import java.nio.Buffer;
import java.util.*;
import java.io.*;
import java.util.Map;
import java.util.HashMap;

public class Main {
    public static void main(String[] args)throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int tc = Integer.parseInt(br.readLine());
        br.readLine();

        for(int i = 0; i < tc; i++){
            Map<String,Integer> map = new TreeMap<String,Integer>();
            String s;

            int ctr = 0;
            while((s = br.readLine()) != null){
                if(s.compareTo("") == 0)break;

                if(!map.containsKey(s)){
                    map.put(s,1);
                }else{
                    int val = map.get(s);
                    map.put(s,val+1);
                }

                ctr++;
            }

            for(Map.Entry<String,Integer> u : map.entrySet()){
                System.out.printf("%s %.4f\n",u.getKey() , u.getValue() * 100.0 / ctr);
            }

            if(i < tc-1)System.out.println();
        }
    }
}
