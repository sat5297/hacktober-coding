package sorting;

import java.util.Scanner;

public class BubbleSort {

	public static void main(String[] args) {

		int n;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter array size: ");	//Asking User to Enter Size of Array
		n = sc.nextInt();		
		int a[] = new int[n];
		System.out.println("Enter array: ");	//Entering Array Elements
		for(int i=0;i<n;i++) {
			a[i] = sc.nextInt();
		}
		System.out.println("Array before sorting: ");
		for(int item:a) {
			System.out.println(item+" ");	//Array Before Sorting
		}
		for(int i=0;i<n-1;i++) {	//Sorting Algorithm	
			boolean sort = true;	
			for(int j=0;j<n-i-1;j++) {
				if(a[j+1]<a[j]) {
					
					int temp = a[j+1];
					a[j+1] = a[j];
					a[j] = temp;
					sort = false;
				}
			}
			if(sort)
				break;
		}
		
		System.out.println("Array after sorting: ");	//Array After Sorting
		for(int i:a) {
			System.out.print(i+" ");
		}
		sc.close();
	}

}
