import java.util.Scanner;
import java.lang.*;

/**
 * Day11
 */
public class Day11 {

    Scanner input = new Scanner(System.in);
    int n = input.nextInt();

    public static int maxConsecutiveOnes(int n)
    {
        // Initialize result
        int count = 0;
 
        // Count the number of iterations to
        // reach x = 0.
        while (n!=0)
        {
            // This operation reduces length
            // of every sequence of 1s by one.
            n = (n & (n << 1));

            System.out.println(n);
 
            count++;

            System.out.println(count);
        }
 
        return count;
    }
    public static void main(String[] args) {
        Day11 d = new Day11();
       
        System.out.println(maxConsecutiveOnes(d.n));
 

    }
}