/**
 * UserDefinedArrays
 */
class Student{
    
}
public class UserDefinedArrays {

    public static void main(String[] args) {
        
        Student s1 = new Student("16D41A05F0","SriMani","MALE","18-MAY-1999",98.652);
        Student s2 = new Student("16D41A05C8","Aravind","MALE","27-SEP-1998",91.3223);

        Student s = new Student[2];

        s[0] = s1;
        s[1] = s2;

        for(int i = 0 ; i < s.length ; i++ ){

            System.out.println(s[i]);

        }
      

    }
}