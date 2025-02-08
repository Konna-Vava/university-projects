/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package conditionalex;

import java.util.Scanner;

public class GameScore {

    public static void main(String args[]) {
        int score, temperature;
        System.out.print("Enter the score\n");
        Scanner keyboard = new Scanner(System.in);
        score = keyboard.nextInt();
        System.out.print("Enter the temperature \n");

        temperature = keyboard.nextInt();

        if ((score >= 10) && (temperature >= 100)) {
            System.out.println("It's hot out, and so am I!");
        }

        if ((score < 5) || (temperature <= 32)) {
            System.out.println("I'm in a bad mood");
        }

        if (!(score < 5)) {
            System.out.println("Score is 5 or more)");
        }
    }
}
