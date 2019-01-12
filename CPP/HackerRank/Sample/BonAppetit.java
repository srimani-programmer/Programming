import java.util.Scanner;

class Bon{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int items = in.nextInt();
        int dislikeItem = in.nextInt();
        int[] a = new int[items];
        for(int i=0;i<items;i++){
            a[i] = in.nextInt();
        }
        int charged = in.nextInt();
        int sum = 0;
    for(int i=0;i<items;i++){
        sum = sum + a[i];
    }
   // cout<<"The before sum is:"<<sum<<endl;
    sum = Math.abs(sum - a[dislikeItem]);
    sum = sum/2;
  //  cout<<"The sum is:"<<sum<<endl;
    int finalAmount = Math.abs(sum - charged);

    if(sum == charged){
        System.out.println("Bon Appetit");
    }else{
        System.out.println(finalAmount);
    }
    }
}