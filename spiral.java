import java.io.*;
import java.util.*;

class spiral
{
	static void display(int arr[][])
	{
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				System.out.print(arr[i][j]);
			}
		}
	}

	static void spiral(int arr[][],int r,int c)
	{
		int top=0;
		int down=r-1;
		int left=0;
		int right=c-1;
		int dir=1;
		int i;
		while(top<=down && left<=right)
		{
			if(dir==1)
			{
				for(i=left;i<=right;i++)
				{
					System.out.print(arr[top][i]);
				}
				top--;
				dir++;
			}
			
			if(dir==2)
			{
				for(i=top;)
			}

		}
	}

	public static void main(String args[])
	{
	
		//int arr[][]=new int[4][4];
		int arr[][]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
		display(arr);
		spiral(arr,4,4);
	}

	
}