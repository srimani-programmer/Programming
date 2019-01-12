import java.util.Scanner;

class Kaprekar{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int s = in.nextInt();
        int n = in.nextInt();
        int count = 0;

        for(int i=s;i<=n;i++){
            int kno = i * i;
            int rev;
            int sum = 0;

            while(kno!=0){
                rev = kno % n;
                sum = sum + rev;
                kno = kno/n;
            }

            if(sum == i){
                System.out.print(i + " ");
                count++;
            }
                
        }
        if(count == 0){
            System.out.println("INVALID RANGE");
        }

    }
}