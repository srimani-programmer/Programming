/**
 * Practice01
 */
public class Practice01 {

    public void m1(int i){
        System.out.println("int-args");
    }
    public void m1(float f){
        System.out.println("short args");
    }

    public static void main(String[] args) {
        Practice01 p = new Practice01();
        p.m1('a');
        p.m1(4232343344l);
    }
}