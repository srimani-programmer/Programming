import java.util.Scanner;
// Code is not standard 
class Solution{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        
        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(a[i] == a[j] && j != i){
                    count++;
                }
            }
            if(count!=0){
                b[i] = count+1;
                count = 0;
            }else{
                b[i] = count;
                count = 0;
            }
        }
        for(int i=0;i<n;i++){
            System.out.print(b[i]+" ");
        }
    }
}