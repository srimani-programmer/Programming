import java.util.Scanner;

/**
 * SumOfMatrix
 */
public class SumOfMatrix {
public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int n = input.nextInt();

    int[][] a = new int[n][n];

   
    for(int i=0;i<a.length;i++){
        for(int j=0;j<a[i].length;j++){
            a[i][j] = input.nextInt();
        }
    }

    for(int i=0;i<a.length;i++){
        for(int j=0;j<a[i].length;j++){
            System.out.print(a[i][j]);
            System.out.print("\t");
        }
        System.out.print("\n");
    }

    System.out.print("\n");
int sum =0,sum1=0,sum2=0;
    for(int i=0;i<a.length;i++){
        sum = sum+a[i][0];
        sum1 = sum1 + a[i][1];
        sum2 = sum2 + a[i][2];
    }
    System.out.println(sum);
    System.out.println(sum1);
    System.out.println(sum2);

    for (int var[] : a) {
        for (int var1 : var) {
            System.out.print(var1);
            System.out.print("\t");
        }
        System.out.print("\n");
    }

}
}