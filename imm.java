import java.util.*;

class imm
{
	public static void main(String args[])
	{
		
		Scanner br=new Scanner(System.in);
		System.out.println("Enter the num: ");
		int n=br.nextInt();
		ArrayList<Integer> arrli=new ArrayList<Integer>();
		for(int i=0;i<n;i++)
		{
			int k=br.nextInt();
			arrli.add(k);
		}

		System.out.println("NUMBER: "+arrli.get(2));
	}
}