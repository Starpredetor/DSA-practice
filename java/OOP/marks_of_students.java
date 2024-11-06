import java.util.Scanner;

class marks_of_students {
    public static void main(String[] args) {
        int chem, phy, math;
        double per;

        Scanner sfc = new Scanner(System.in);

        System.out.print("Enter marks of Chemistry: ");
        chem = sfc.nextInt();

        System.out.print("Enter marks of Physics: ");
        phy = sfc.nextInt();

        System.out.print("Enter marks of Mathematics: ");
        math = sfc.nextInt();

        per = (((phy+chem+math)/300.0)*100);
        System.out.println("Percentage: "+(int)per+"%");

        switch((int)per/10){
            case 10,9,8:
                System.out.println("Student scored distinction");
                break;
            case 7,6:
                System.out.println("Student scored First class");
                break;
            case 5:
                System.out.println("Student scored Second class");
                break;
            case 4:
                System.out.println("Student passed");
                break;
            case 3,2,1:
                System.out.println("Student Failed");
                break;
            default:
                System.out.println("Incorrect marks");
        }
    }
} 