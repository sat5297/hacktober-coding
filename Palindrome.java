import java.util.*;
public class Palindrome
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number which needs to be checked for palindrome");
        int n = sc.nextInt();
        int rev =0;
        /*Store actual value of number in num as n will be changed in the loop */
        int num = n;

        /*Loop exists till the whole number doesn't become 0 */
        while(n != 0)
        {
            int rem = n%10;
            rev = rev*10 + rem;
            n = n/10;
        }
        
        /*Compare the original number and reverse of the number */
        if(num == rev)
        {
            System.out.println("Palindrome");
        }
        else
        {
            System.out.println("Not Palindrome");
        }
        sc.close();
    }
}