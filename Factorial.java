package introduction;

import java.util.Scanner;

public class Factorial {

	public static void main(String[] args) {
		
		int number;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter Number: ");
		number = in.nextInt();
		System.out.println(fact(number));
		in.close();

	}
	
	public static int fact(int number) {
		if(number == 1)
			return 1;
		return number*fact(--number);
	}

}
