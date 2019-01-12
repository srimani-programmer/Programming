//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Day08{
    public static void main(String []argh)throws ArrayIndexOutOfBoundsException,IOException
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Map<String,String> phn = new HashMap<String,String>();
        for(int i = 0; i < n; i++){
            String name = in.next();
            String phone = in.next();
            phn.put(name, phone);
        }
      //  System.out.println(phn.get("aravind"));
        Hashtable<String,String> ht = new Hashtable<String,String>();
        String[] a;
        String s,ip;
        while(in.hasNext()){
            s = in.nextLine();
            a = s.split("");
            ht.put(a[0],a[1]);
        }
        Scanner in1 = new Scanner(System.in);
        ip = in1.next();
        if(ht.containsKey(ip)){
            System.out.println(ip + "="+ht.get(ip));
        }else{
            System.out.println("Not found");
        }
       /* while(in.hasNext()){
            String s = in.next();
            // Write code here  
        }*/
     //  in.close();
    }
}