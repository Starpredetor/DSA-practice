import java.util.Scanner;



public class volume_sphere {
    public static void main(String[] args) {
        Volume volume = new Volume();
        volume.acceptRadius();
        volume.calculate();
    }
}

class Circle {
    protected double radius;

    public void acceptRadius() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the radius of the circle:");
        radius = scanner.nextDouble();
    }
}

class Area extends Circle {
    public void calculate() {
        double area = Math.PI * radius * radius;
        display(area);
    }

    public void display(double area) {
        System.out.println("The area of the circle is: " + area);
    }
}

class Volume extends Area {
    public void calculate() {
        double volume = (4/3.0) * Math.PI * radius * radius * radius;
        display(volume);
    }

    public void display(double volume) {

        System.out.println("The volume of the sphere is: " + volume);
    }
}
