import java.util.Scanner;


class Sol{

    public static int beautifulDays(int i, int j, int k) {
        int num,count=0,gn;
        int quo, newNum = 0;
        for (int x = i; x <= j ; x++)
        {
            num = x;
            newNum = 0;
            //For reversing no
            while (num != 0)
            {
                quo = num % 10;
                newNum = 10 * newNum + quo;
                num = num / 10;
            }
            gn = Math.abs(x- newNum);
            if (gn%k==0)
            {
                count++;
            }
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int low = in.nextInt();
        int high = in.nextInt();
        int div = in.nextInt();
        System.out.println(beautifulDays(low, high, div));
    }
}