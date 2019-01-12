import java.util.*;

class Person {
	protected String firstName;
	protected String lastName;
	protected int idNumber;
	
	// Constructor
	Person(String firstName, String lastName, int identification){
		this.firstName = firstName;
		this.lastName = lastName;
		this.idNumber = identification;
	}
	
	// Print person data
	public void printPerson(){
		 System.out.println(
				"Name: " + lastName + ", " + firstName 
			+ 	"\nID: " + idNumber); 
	}
	 
}
class Student extends Person{
    int[] testScores;
    int sum =0,finalAverage;
    Student(String firstName,String lastName,int identification,int[] testScores){
        super(firstName,lastName,identification);
        for(int i=0;i<testScores.length;i++){
            sum = sum + testScores[i];
        }
        finalAverage  = sum /(testScores.length);
    }
   
    
    
    public void printPerson(){
        System.out.println(lastName + ","+" "+firstName);
        System.out.println("ID:"+" "+idNumber);
        System.out.println(finalAverage);
    }
    public String calculate(){
        if(finalAverage >= 90 && finalAverage <= 100){
            return "O";
        }else if(finalAverage >= 80 && finalAverage < 90){
             return "E";
        }else if(finalAverage >= 70 && finalAverage < 80){
             return "A";
        }else if(finalAverage >= 55 && finalAverage < 70){
             return "P";
        }else if(finalAverage >= 40 && finalAverage < 55){
           return "D";
        }else{
            return "T";
        }
    }
}
class Day12 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String firstName = scan.next();
		String lastName = scan.next();
		int id = scan.nextInt();
		int numScores = scan.nextInt();
		int[] testScores = new int[numScores];
		for(int i = 0; i < numScores; i++){
			testScores[i] = scan.nextInt();
		}
		scan.close();
		
		Student s = new Student(firstName, lastName, id, testScores);
		s.printPerson();
		System.out.println("Grade: " + s.calculate() );
	}
}