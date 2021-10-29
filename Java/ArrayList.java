import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> L = new ArrayList<Integer>();
        int N = sc.nextInt();
        for(int i=0;i<N;i++){
            int num = sc.nextInt();
            L.add(i,num);                 //Adding elements in an arraylist
        }
        String ins = "Insert";
        String del = "Delete";
        int Q = sc.nextInt();             //Raising queries in an arraylist
        for(int i=0;i<Q;i++){
            String s = sc.next();
            if(s.equals(ins)){
                int ind = sc.nextInt();
                int val = sc.nextInt();
                L.add(ind,val);           //Inserting new elements in an arraylist
            }
            else if(s.equals(del)){
                int ind = sc.nextInt();
                L.remove(ind);            //Deleting existing elements in an arraylist
            }
        }
        for(int i=0;i<L.size();i++) {               
            System.out.print(L.get(i) +" ");      //Displaying number of element left in an arraylist   
        }   
    }
}
