import java.util.Arrays;
import java.util.Scanner;

class Solution{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] a;
        int n = in.nextInt();
        a = new int[n];

        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        int max = a[0];
        int count =0;
           for(int i=0;i<n;i++){
               if(a[i]>max){
                   max = a[i];
               }
           }
           for(int i=0;i<n;i++){
               if(max == a[i]){
                   count++;
               }
           }
           System.out.println(count);
    }
}