import java.util.Arrays;
import java.util.Scanner;
import java.math.*;

/**
 * Day14
 */
public class Day14 {
     int[] arr;
     int maxDifferenceValue;
     int n;

    public void maxDifference(){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        maxDifferenceValue = Math.abs(arr[n-1] - arr[0]);
        System.out.println(maxDifferenceValue);
    }
    public static void main(String[] args) {  
        Day14 d = new Day14();
        d.maxDifference();
    }
}