import java.util.Arrays;
import java.util.Scanner;

class Mean{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        Arrays.sort(a);

        double meanResult = 0.0;
        for(int i=0;i<n;i++){
            meanResult = meanResult + a[i];
        }
        //MeanCalculation
        meanResult = meanResult/n;

        //Median Calculation

        int low = 0;
        int high = n-1;
        int mid = (low + high)/2;
        double medianResult = 0.0;
        if(n%2 == 0){
            meanResult = (a[mid] + a[mid+1])/2;
        }else{
            meanResult = a[mid]/2;
        }

        //Mode Calculation
        
    }
}