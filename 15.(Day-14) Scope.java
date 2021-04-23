import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference {
  	private int[] elements;
  	public int maximumDifference;
Difference(int [] elements){
        this.elements = elements ;
    }
    public void computeDifference(){
        int diff = 0 ,maximumDifference1  = 0;
           for(int i = 0 ; i < elements.length ; i++){
               for(int j = i+1 ; j < elements.length ; j++){
                   diff = Math.abs(elements[i] - elements[j]);
                   if(maximumDifference1 < diff){
                       maximumDifference1 = diff ;
                   }
               }
           }
            maximumDifference = maximumDifference1;
    }
} // End of Difference class

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();

        Difference difference = new Difference(a);

        difference.computeDifference();

        System.out.print(difference.maximumDifference);
    }
}