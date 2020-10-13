import java.util.*;
class Rotate90
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Input the number of rows or columns in the matrix");
        int m=sc.nextInt();
        if(m>=2&&m<=20)
        {
            int a[][]=new int[m][m];
            System.out.println("Input the elements in the matrix");
            for(int x=0;x<m;x++)
            {
                for(int y=0;y<m;y++)
                {
                    a[x][y]=sc.nextInt();
                }
            }
            System.out.println("The original matrix is-");
            for(int x=0;x<m;x++)
            {
                for(int y=0;y<m;y++)
                {
                    System.out.print(a[x][y]+"\t");
                }
                System.out.println();
            }
            int b[][]=new int[m][m];
            System.out.println("The rotated matrix is-");
            for(int x=0;x<m;x++)
            {
                for(int y=0;y<m;y++)
                {
                    b[x][y]=a[m-y-1][x];
                    System.out.print(b[x][y]+" \t");
                }
                System.out.println();
            }
        }
        else
            System.out.println("Size out of range");
    }
}

         