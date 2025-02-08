import java.util.Random;
public class RandomNum{
  public static void main(String[] args) {
    Random rand1 = new Random();
    int randomnum= rand1.nextInt(6);
    System.out.println("randomnum: " + randomnum);
    randomnum++;
    System.out.println("Το ζάρι έφερε: " + randomnum);
  }
}


