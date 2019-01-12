import java.util.Scanner;

class Solution{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        int count = 0;
        for(int i=0;i<arr.length;i++){
            int val = arr[i];
            for(int j=2;j<arr[i];j++){
                if(arr[i]%j == 0){
                    count++;
                }
            }
            if(count == 0){
                System.out.println("Prime");
            }else{
                System.out.println("Not prime");
            }
            count = 0;
        }
    }
}