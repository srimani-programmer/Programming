/**
 * Day02
 */

 import java.util.*;

import javax.annotation.processing.RoundEnvironment;
public class Day02 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double mealCost = sc.nextDouble();
        int tip = sc.nextInt();
        int tax = sc.nextInt();

        double taxPercentage = (mealCost * ((double)tax/100));

        double tipPercentage = (mealCost * ((double)tip/100));

        int totCost = (int) ((mealCost + taxPercentage + tipPercentage));

        System.out.println(totCost);
    }
}