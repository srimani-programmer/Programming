package com.srimani;

interface A{
    void m1();
    public static void m2(){
        System.out.println("Static method in interface");
    }
    public default void m3(){
        System.out.println("Default method in Interface");
    }
    private void m4(){
        System.out.println("Private methods in interface");
    }

}

public class Main implements A{
    public void m1(){
        System.out.println("Implemented class");
    }
    public static void main(String[] args){
        Main m = new Main();
        m.m1();
        m.m3();
    }
}
