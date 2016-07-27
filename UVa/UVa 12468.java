import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int a,b,res = 0;
        while(true){
            a = sc.nextInt();
            b = sc.nextInt();

            if(a == -1 && b == -1)break;

            if(a == b){
                res = 0;
            }else {
                if (a == 0 && b != 0) {
                    if (b - a > 50) res = 100 - b;
                    else
                        res = b - a;
                } else if (a != 0 && b == 0) {
                    if (a - b > 50) res = 100 - a;
                    else
                        res = a - b;
                } else if (a != 0 || b != 0) {
                    if (a < b) {
                        if (b - a > 50) res = 100 - b + a;
                        else
                            res = b - a;
                    } else if (b < a) {
                        if (a - b > 50) res = 100 - a + b;
                        else
                            res = a - b;
                    }
                }
            }

            System.out.println(res);

        }
    }
}