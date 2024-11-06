import java.util.Scanner;

class Palindrome {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string:");
        String str = scanner.nextLine();

        StringBuffer str1 = new StringBuffer(str);
        str1.reverse();
        String rev = str1.toString();
        
        if (str.equals(rev)) {
            System.out.println(str + " is a palindrome");
        } else {
            System.out.println(str + " is not a palindrome");
        }
    }
}