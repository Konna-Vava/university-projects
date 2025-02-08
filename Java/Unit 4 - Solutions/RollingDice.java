import java.util.Random;

public class RollingDice {

    public static void main(String[] args) {
        Random rand = new Random();

        int sum;

        // roll the dice once
        int roll1 = rand.nextInt(6) + 1;
        int roll2 = rand.nextInt(6) + 1;
        sum = roll1 + roll2;
        System.out.println(roll1 + " + " + roll2 + " = " + sum);

    }

}


