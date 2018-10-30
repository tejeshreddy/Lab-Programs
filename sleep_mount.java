import java.io.*;
import java.util.*;

class sleep_mount
{
	public static void printz(int n)
	{
		int times=n-1;
		int count=1;
		int number=n;
		int line_c=1;

		while(count<=times)
		{
			System.out.print(number+"*");
			count++;
		}
		System.out.print(number);


	}

	public static void main(String args[])
	{
		printz(4);
	}
}