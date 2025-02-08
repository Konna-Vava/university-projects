import java.util.Scanner;

public class AreaOfCircle {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius: ");
        double radius = sc.nextDouble();
        double area = 3.1412 *radius * radius;
        System.out.println("The area of circle is: " + area);

    }
}
