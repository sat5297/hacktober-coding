package tempPack;

import java.util.Scanner;

public class Count_occurence_of_given_character_in_string {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String str = s.nextLine();
		int n = str.length();
		char ch = s.next().charAt(0);
		int count = 0;
		for(int i = 0; i < n; i++) {
			if(ch == str.charAt(i)) {
				count++;
			}
		}
		System.out.println(count);
	}

}
