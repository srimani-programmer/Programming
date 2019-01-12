import java.util.Scanner;

// This program is in pogress
class Alpha{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String input = in.next();
        if(input.length() < 26)
        {
            System.out.println("not pangram");
        }
                  
        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            if (input.indexOf(ch) < 0 && input.indexOf((char) (ch + 32)) < 0)
            {
                System.out.println("not pangram");
            }
        }
        System.out.println("pangram");
    }

    
}