import java.util.*;
import java.io.*;

class SumOfDigits{
   public static void main(String[] args) throws IOException{
      //Take in row of numbers separated by spaces
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      //Change numbers to int and add into an arrayList
      System.out.print("Enter numbers with spaces between them here ==> ");
      String nums[] = br.readLine().split(" ");
      //Loop through all numbers and add
      int sum = 0;
      for(int i = 0; i < nums.length; i++){
         sum+=Integer.parseInt(nums[i]);
      }
      System.out.println();
      //Print out sum
      System.out.print("Sum: " + sum);
      
   }
   
}