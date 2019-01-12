/**
 * Arthimetic
 */
public class Arthimetic {

    public void sum(){
        byte b1 = 10, b2 = 25, b3 = 35 ,b4;

        b4 = (byte)(b1 + b2 + b3);

        System.out.println(b4);

    }
    public void sum1(){

    }

    public static void main(String[] args) {
        
        Arthimetic a1 = new Arthimetic();
        Arthimetic a2 = new Arthimetic();
        Arthimetic a3 = a1;
        Arthimetic1 a21 = new Arthimetic1();
        Arthimetic1 a22 = new Arthimetic1();


        System.out.println(a1 == a21);
       // System.out.println(a1.equals(a21));
    }
}

class Arthimetic1{
    public void sum2(){

    }
}