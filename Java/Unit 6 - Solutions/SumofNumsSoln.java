import java.util.Scanner;

public class SumofNumsSoln {

    public static void main(String args[]) {
        Scanner console = new Scanner(System.in);
        int sum = 0;
        System.out.print("Enter a number (-1 to quit): ");
        int number = console.nextInt();
        do
        {
            sum = sum + number;     
            System.out.print("Enter a number (-1 to quit): ");
            number = console.nextInt();
        }while (number != -1);

        System.out.println("The sum is " + sum);

    }
}
