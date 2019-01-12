import java.util.Arrays;
import java.util.Scanner;

class Absolute{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        Arrays.sort(a);

        int diff = Math.abs(a[0] - a[1]);
        for(int i=0;i<n-1;i++){
            int sub = Math.abs(a[i] - a[i+1]);
            if(sub<diff){
                diff = sub;
            }
        }
        System.out.println(diff);
    }
}