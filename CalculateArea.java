import java.util.Scanner;

public class CalculateArea {

    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);
        int opt;

        do {

            System.out.println("Select: 1 - Rectangle | 2 - Square | 3 - Circle | 0 - Exit");
            opt = scan.nextInt();

            switch (opt) {
                case 1 -> {
                    System.out.println("Input Width:");
                    double width = scan.nextDouble();
                    System.out.println("Input Height");
                    double height = scan.nextDouble();
                    System.out.println("Rectangle area: " + String.format("%.2f", retangleArea(width, height)));
                }
                case 2 -> {
                    System.out.println("Input a side:");
                    double side = scan.nextDouble();
                    System.out.println("Square area: " + String.format("%.2f", squareArea(side)));
                }
                case 3 -> {
                    System.out.println("Input the radius:");
                    double radius = scan.nextDouble();
                    System.out.println("Circle area: " + String.format("%.2f", circleArea(radius)));
                }
                case 4 -> {
                    System.exit(0);
                }
                default -> System.out.println("Inválid Option, please select 1, 2 or 3");
            }
        } while (opt != 0);
    }

    public static double retangleArea(double width, double height) {
        return width * height;
    }

    public static double squareArea(double side) {
        return Math.pow(side, 2);
    }

    public static double circleArea(double radius) {
        return Math.PI * Math.pow(radius, 2);
    }
}