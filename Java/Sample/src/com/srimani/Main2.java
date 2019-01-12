package com.srimani;

public class Main2 {
    {
        System.out.println("F.I.B");
    }
    static {
        System.out.println("F.S.B");
    }
    Main2(){
        System.out.println("Constructor");
    }
    public static void main(String[] args) {
        Main2 m = new Main2();
        System.out.println("Main");
        Main2 m1 = new Main2();
    }
    static {
        System.out.println("S.S.B");
    }
    {
        System.out.println("S.I.B");
    }
}
