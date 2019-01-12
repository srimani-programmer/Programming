import java.math.BigDecimal;
import java.util.*;
class Solution{
public static void main(String []argh){

    Scanner sc= new Scanner(System.in);
    int n=sc.nextInt();
    String []s=new String[n+2];
    BigDecimal a[] = null;

    for(int i = 0; i < n ; i++){
        s[i]=sc.next();
        a[i] = new BigDecimal(s[i]);
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 1; j < n; j++){
            if(a[i].compareTo(a[j]) == -1){
                BigDecimal temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    //Output
    for(int i=0;i<n;i++){
        s[i] = a[i].toString();
        System.out.println(s[i]);
    }
}
}