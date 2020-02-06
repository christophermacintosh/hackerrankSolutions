import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
        
        Scanner scan = new Scanner(System.in);

        /* Declare second integer, double, and String variables. */
        int intvar;
        double doublevar;
        String stringvar;
        /* Read and save an integer, double, and String to your variables.*/
        intvar = Integer.parseInt(scan.next());
        doublevar = Double.parseDouble(scan.next());
        String juan, two, tree;
        stringvar = scan.nextLine();
        //I think this is basically clearing the whitespace
        juan = scan.nextLine();
        // Note: If you have trouble reading the entire String, please go back and review the Tutorial closely.
        
        /* Print the sum of both integer variables on a new line. */
          System.out.println(intvar+i);
        /* Print the sum of the double variables on a new line. */
          System.out.println(doublevar+d);
        /* Concatenate and print the String variables on a new line; 
            the 's' variable above should be printed first. */
          System.out.println(s+stringvar+juan);
        scan.close();
    }
}