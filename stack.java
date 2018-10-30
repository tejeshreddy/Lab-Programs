import java.io.*;
import java.util.*;

class stack
{
	public static void main(String args[])
	{
		String str;
		int max=20;
		int top=-1;
		//int flag=0;
		int count=0;
		int latest=0;
		int j=0;
		Scanner br=new Scanner(System.in);
		char ch[]=new char[max];
		char ch1[]=new char[max];

		str=br.nextLine();
		ch=str.toCharArray();
		int x=ch.length;
		//System.out.println(x);
		while(count!=2)
		{
			for(int i=0;i<(x-1);i++)
			{
				
				if(Character.getNumericValue(ch[i+1])>Character.getNumericValue(ch[i]))
				{
					ch1[j]=ch[i];
					j++;
					count++;
				}
			}
			System.out.println(Character.getNumericValue(ch[i]));			
		}

		/*for(int i=0;i<j;i++)
			System.out.println(ch1[j]);*/
	}
}