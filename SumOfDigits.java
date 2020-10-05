import java.util.*;
import java.io.*;

class SumOfDigits{
   public static void main(String[] args) throws IOException{
      // take in row of numbers separated by spaces
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      //change numbers to int and add into an arrayList
      System.out.print("Enter numbers with spaces between them here ==> ");
      String nums[] = br.readLine().split(" ");
      //for loop to loop through all numbers and add
      int sum = 0;
      for(int i = 0; i < nums.length; i++){
         sum+=Integer.parseInt(nums[i]);
      }
      System.out.println();
      System.out.print("Sum: " + sum);
      //print out sum
   }
   
}