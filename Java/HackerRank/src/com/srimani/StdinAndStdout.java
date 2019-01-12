package com.srimani;

import java.util.Scanner;

public class StdinAndStdout {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        double d = in.nextDouble();
        String s = in.nextLine();
        s = s + in.nextLine();
        in.close();

        System.out.println("String: "+s);
        System.out.println("Double: "+d);
        System.out.println("Int: "+n);

    }
}
