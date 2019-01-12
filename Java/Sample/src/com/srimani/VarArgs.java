package com.srimani;

public class VarArgs {

    public static void arguments(int...  a){
         int sum = 0;
        for(int i=0;i<a.length;i++){
            sum = sum + a[i];
        }
        System.out.println("The sum is:"+sum);
    }

    public static void main(String[] args){
        arguments(10,20,30,40,50,60,70);
        arguments(23,342,134,14,34,3252,34,52,365,24,35);
    }
}
