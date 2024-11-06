
import java.util.Scanner;

public class complex {
    public static void main(String[] args) {
            double r,i;
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter real part of first complex number: ");
            r = sc.nextDouble();
            System.out.print("Enter imaginary part of first complex number: ");
            i = sc.nextDouble();
            cmpx c1 = new cmpx(r,i);
            c1.show();

            System.out.print("Enter real part of second complex number: ");
            r = sc.nextDouble();
            System.out.print("Enter imaginary part of second complex number: ");
            i = sc.nextDouble();
            cmpx c2 = new cmpx(r,i);
            c2.show();

            cmpx c3 = new cmpx();
            c3.sum(c1, c2);

    }
}

class cmpx {
    double real,img;
    cmpx(double r, double i){
        real = r;
        img = i;
    }
    cmpx(){
        real = 0;
        img = 0;
    }

    void show(){
        System.out.println(real+" + "+img+"i");
    }
    public void sum(cmpx c1, cmpx c2){
        this.real = c1.real + c2.real;
        this.img = c1.img + c2.img;
        System.out.println("Sum of two complex numbers is: "+real+" + "+img+"i");
    }
}