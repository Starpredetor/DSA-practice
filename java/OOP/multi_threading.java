import java.util.Scanner;

class multi_threading extends Thread {
    private int number;

    public int getNumber() {
        return number;
    }

    @Override
    public void run() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        number = scanner.nextInt();
        scanner.close();
    }

    public static void main(String[] args) throws InterruptedException {
        multi_threading readNumber = new multi_threading();
        readNumber.start();
        readNumber.join();

        int number = readNumber.getNumber();
        CalculateSquare calculateSquare = new CalculateSquare(number);
        Thread t2 = new Thread(calculateSquare);

        t2.start();
        t2.join();

        int square = calculateSquare.getSquare();

    System.out.println("Square of " + number + " is " + square);
    }
}

class CalculateSquare implements Runnable {
    private int number;
    private int square;

    public CalculateSquare(int number) {
        this.number = number;
    }

    public int getSquare() {
        return square;
    }

    @Override
    public void run() {
        square = number * number;
    }
}