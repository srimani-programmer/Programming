import java.util.Scanner;

class Solution{
    public static void main(String[] args) {
        
        Solution.calculate();
}

    public static void calculate(){
        int a[];
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        a = new int[n];

        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }

        int count = 0;

        for(int i=0;i<n;i++){
            int num = a[i];
            while(num!=0){
                //rev = rev * 10;
                int rev = 0;
                rev = rev + num%10;
                if(rev!=0){
                    if(a[i]%rev == 0){
                        count++;
                    }
                }
                num = num/10;
            }
            System.out.println(count);
            count = 0;
        }
    }
}
    