import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class MultiCatch {

    public int countChars(String fileName) {
        int total = 0;
        try {
            FileReader r = new FileReader(fileName);
            while (r.ready()) {
                r.read();
                total++;
            }
            r.close();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        } catch (IOException e) {
            System.out.println(e.getMessage());
        } catch (FileNotFoundException e) {
            System.out.println(e.getMessage());
        }

        return total;
    }
}
