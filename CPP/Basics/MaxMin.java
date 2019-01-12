import java.util.Arrays;
import java.util.Scanner;

// This program is in progress

class Maximum{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        int val = in.nextInt();
        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int diff = 0;
        for(int i=0;i<n-val+1;i++){
            int mindiff = a[i];
            int maxdiff = a[i+val-1];

            diff = Math.min((maxdiff - mindiff), (maxdiff-mindiff)+1);

        }
        System.out.println(diff);
    }
}