import java.math.BigInteger;
import java.util.Scanner;

class Big{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        BigInteger a = in.nextBigInteger();
        BigInteger b = in.nextBigInteger();

        System.out.println(a.add(b));
        System.out.println(a.multiply(b));

    }
}