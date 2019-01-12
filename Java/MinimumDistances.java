import java.util.Arrays;
import java.util.Scanner;

class Minimum{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];

        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        int minValue = -1;
        for(int i=0;i<n;i++){
            for(int j=i;j<n-1;j++){
                if(a[i] == a[j+1]){
                 minValue = Math.min(j+1-i,j+i);
                }
            }
        }
        System.out.println(minValue);
       
    }
}