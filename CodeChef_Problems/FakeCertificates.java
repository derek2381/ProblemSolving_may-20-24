// problem link
// https://www.codechef.com/problems/FKMC

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		while(t-- > 0){
		    int n = sc.nextInt();
		    sc.nextLine();
		    String str = sc.nextLine();
		    

		    char[] ch = str.toCharArray();
		    int c0 = 0, c1 = 0, max0 = 0;

		   for(int i = 0;i < n;i++){
		       if(c0 > max0){
		           max0 = c0;
		       }
		       if(str.charAt(i) == '0'){
		           c0++;
		       }else{
		           c0 = 0;
		           c1++;
		       }
		   }

		   if(max0 < c0){
		       max0 = c0;
		   }

		    System.out.println(max0 + c1);

		}

	}
}
