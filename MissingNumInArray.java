//in a given integer array, this program finds the missing numberin array
public class MissingNumInArray {
public static void main(String[] args) {
    int arr[]={1,5,4,3,2,6,7,10,8};
    System.out.println(MissNum(arr));
}
public static int MissNum(int arr[]){
    int n=arr.length;
    int total=((n+1)*(n+2))/2;
    int currSum=0;
    for(int i=0;i<n;i++) {
         currSum+=arr[i];
    }
    return total-currSum;
}    
}
