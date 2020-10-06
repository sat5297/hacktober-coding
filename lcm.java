import java.util.Scanner;
public class lcm
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Input the first number: ");
		int a = sc.nextInt();
		System.out.println("Input the second number: ");
		int b = sc.nextInt();
		int max = Math.max(a,b);
		while(true)
		{
			if (max % a == 0 && max % b == 0)
			{
				System.out.println("LCM is:"+max);
				break;
			}
			else
			{
				++max;
			}
		}
	}
}
