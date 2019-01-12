import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Day20 {

    public static void main(String[] args) {
        int nooOfSwaps = 0;
        int firstEle,lastEle,i;
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
            for(i=0;i<n;i++){
                for(int j=0;j<(n-1);j++){
                    if(a[j] > a[j+1]){
                        int temp;
                        temp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = temp;
                        nooOfSwaps++;
                    }
                }
            }
            firstEle = a[i];
            lastEle = a[a.length-1];
            System.out.println("Array is sorted in"+" "+nooOfSwaps+" "+"swaps.");
            System.out.println("First Element: "+firstEle);
            System.out.println("Last Element: "+lastEle);
       
    }
}
  