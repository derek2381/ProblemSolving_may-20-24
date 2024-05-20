// problem link
// https://codeforces.com/problemset/problem/1296/A

import java.util.*;

public class solution{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-- > 0){
            int n = sc.nextInt();
            int[] arr = new int[n];
            int even = 0, odd = 0;

            for(int i = 0;i  <n;i++){
                arr[i] = sc.nextInt();
                if((arr[i] & 1) != 0){
                    odd++;
                }else{
                    even++;
                }
            }

            if((odd & 1) != 0){
                System.out.println("YES");
            }else{
                if(even > 0 && odd > 0){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
            }


        }
    }
}
