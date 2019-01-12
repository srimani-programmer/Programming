/**
 * VarArgsSample
 */
public class VarArgsSample {
    void display(int ...x){

        System.out.println("x");
            
    }

    public static void main(String[] args) {

        VarArgsSample v = new VarArgsSample();
        v.display(10);
        v.display(10,20,30);
        v.display(10,20,30,40,50,60,70,80,90,100,101,0120,1021,234,543,3453,345345,345,34,43534,34,34,6,44,57,47,45,54345,456);
        
    }
}