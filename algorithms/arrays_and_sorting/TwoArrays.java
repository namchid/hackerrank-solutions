import java.io.*;
import java.util.*;

public class TwoArrays {
    
    static String arrange(int[] a, int[] b, int k) {
        Arrays.sort(a);
        Arrays.sort(b);
        
        int end = b.length-1;
        for(int i = 0; i < a.length; ++i) {
            if(a[i] + b[end] < k) return "NO";            
            --end;
        }
        return "YES";
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int cases = in.nextInt();
        in.nextLine();
        
        for(int i = 0; i < cases; ++i) {
            int n = in.nextInt();
            int k = in.nextInt();
            in.nextLine();
            
            int[] a = new int[n];
            int[] b = new int[n];
            
            for(int x = 0; x < n; ++x) { a[x] = in.nextInt(); }
            in.nextLine();
            for(int y = 0; y < n; ++y) { b[y] = in.nextInt(); }
            System.out.println(arrange(a,b,k));
        }       
    }
}