import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        List<List<Integer>> arr = new ArrayList<>();                                                   //Creating 2D ArrayList
        for (int i = 0; i < 6; i++) {
            String[] arrRowTempItems = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");
            List<Integer> arrRowItems = new ArrayList<>();
            for (int j = 0; j < 6; j++) {
                int arrItem = Integer.parseInt(arrRowTempItems[j]);
                arrRowItems.add(arrItem);
            }
            arr.add(arrRowItems);                                         //Adding elements in an arraylist
        }

        bufferedReader.close();
        
        int count=-99;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                int num = ((arr.get(i).get(j))+(arr.get(i).get(j+1))+(arr.get(i).get(j+2))+(arr.get(i+1).get(j+1))+(arr.get(i+2).get(j))+(arr.get(i+2).get(j+1))+(arr.get(i+2).get(j+2)));                                         //Obtaining the sum of an hourglass in a 2D ArrayList
                if(num>=count){                                         //Checking sum of an hourglass is greater than count or not
                    count = num;                                        //If greater, then value of count becomes equal to an hourglass
                }
            }
        }
        System.out.println(count);                                     //Printing maximum sum of an hourglass possible in a given 2D ArrayList
    }
}
