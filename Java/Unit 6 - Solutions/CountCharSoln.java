public class CountCharSoln {


    public static void main(String[] args) {

        String str = "www.uniwa.gr";

        int max = str.length();
        int count = 0;

        for (int i = 0; i < max; i++) {

            if (str.charAt(i) != 'w')
                continue;

            count++;
        }

        System.out.println("Number of w: " + count );
    }
}
    

