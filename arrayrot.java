/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class arrayrot {
	public static void main (String[] args) 
	{
	    int n,t,count=1;
	    Scanner br=new Scanner(System.in);
	    t=br.nextInt();
	    while(count<=t)
	    {
	        n=br.nextInt();
		    ArrayList<Integer> arrli=new ArrayList<Integer>();
		    for(int j=0;j<n;j++)
		        {
		            int ele=br.nextInt();
		            arrli.add(ele);
		        }
		    int shift=br.nextInt();
		    for(int k=0;k<n;k++)
		        {
		            System.out.print(arrli.get((n+k+shift)%n)+" ");
		        }
		    count++;
	    }
	    
	}
}