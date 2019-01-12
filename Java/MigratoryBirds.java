import java.util.Arrays;
import java.util.Scanner;

class Solution{
    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       int n = in.nextInt();
       int a[] = new int[n];
       for(int i=0;i<n;i++){
           a[i] = in.nextInt();
       }
       System.out.println(migratoryBirds(n, a)); 
}
static int migratoryBirds(int n, int[] ar) {
    // Complete this function
    
    int []arr = new int [6];
    
    for(int id:ar){
        arr[id]++;
    }
    
    int maxValue = 0; 
    int maxPos=0;

    for(int i =1;i<6;i++){
        if(arr[i]>maxValue){
            maxValue = arr[i];
            maxPos =  i;
        }       
    }
    return maxPos;
}

}