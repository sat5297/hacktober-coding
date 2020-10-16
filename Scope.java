import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference {
  	private int[] elements;
  	public int maximumDifference;

	// Add your code here
    Difference(int[] elements)
    {
        this.elements = elements;
    }
    public void computeDifference(){
        int m = 0;    
        for(int i =0; i<elements.length ;i++)
        {
            for(int j=0;j<elements.length;j++)
            {
                int a = Math.abs(elements[i] - elements[j]);
                 if(a>m)
                 {
                 m = a;
                 }
            }
        }
        maximumDifference = m;
    }
    
} // End of Difference class