import java.io.*;
import java.util.*;

class new4
{
	public static void main(String args[])
	{
		String a;
		char at[]=new char[100];
		char az[]=new char[100];

		Scanner br=new Scanner(System.in);
		a=br.nextLine();
		at=a.toCharArray();
		int j=0;

		for(int i=0;i<at.length;i++)
			{
				if(Character.isLetter(at[i]) || Character.isDigit(at[i]))
				{
					az[j]=at[i];
					//System.out.print(az[j]);
					j++;
				}
			}

			String b=new String(az);
			StringBuilder c=new StringBuilder();
			b=b.toLowerCase();
			c.append(b);
			System.out.println(b+""+c.reverse());
			if(b.equals(c.reverse()))
			//if(b == c.reverse())
				System.out.println("YES");

	}
}