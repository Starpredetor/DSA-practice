import java.util.Scanner;

public class inter {
    public static void main(String[] args) {
        TotalMarks t = new TotalMarks();
        t.Rollno();
        t.SemMarks();
        t.Printsports();
        t.finalMarks();
    }
}
    
class Student{
    void Rollno() {
        int rollNo;
        System.out.println("Enter the Roll no: ");
        Scanner sc = new Scanner(System.in);
        rollNo = sc.nextInt();
    }
}

class Marks extends Student{
    static int sem1;
    static int sem2;
    void SemMarks() {
        System.out.println(" Enter sem1 and sem2 Marks: ");
        Scanner sc = new Scanner(System.in);
        sem1 = sc.nextInt();
        sem2 = sc.nextInt();
    }
    
}
    
interface Sports{
   double smarks = 5.02;
    
    }
    
class TotalMarks extends Marks implements Sports{

    void Printsports() {
        System.out.println("The sports marks are: " + smarks);
    }
    
    void finalMarks() {
        double result = ((sem1+sem2)/2) + smarks;
        System.out.println("the sem1 marks are "+ sem1);
        System.out.println("The sem2 marks are: " + sem2);
        System.out.println("The final marks are: " + result);
    
    }
}