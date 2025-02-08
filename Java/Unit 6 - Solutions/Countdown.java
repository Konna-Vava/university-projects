public class Countdown {
  public static void main(String args[]) {
    System.out.println("Countdown to Launch: ");
    int odd=0;
    for(int i = 10; i >= 0; i--) {
      if (i % 2 == 0) {System.out.println(i);}   
    }    
    System.out.println("Ignition!");
  }
}
