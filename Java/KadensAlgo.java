import java.util.*;
//The following class finds the maximum sum sub-array from a given array.
public class Kadens_Algo {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the value of N :");
			int N = sc.nextInt();
			int a[] = new int[N];
			System.out.println("Enter the array elements :");
			for(int i=0;i<N;i++) {
				a[i] = sc.nextInt();
			}
    //max_so_far stores the sum of local sub-arrays.
			int max_so_far = a[0];
    //max_overAll stores the maximum sum of sub-array over all the sums of sub-arrays.
			int max_overAll = a[0];
	        int sum  = 0;
			for(int i=0;i<N;i++) {	
				sum=sum+a[i];
      //if the sum of elements so far of array is less then the element itself ,sum is updated to value of element.
				if(sum<a[i]) {
					sum=a[i];
				}
      //updating max_so_far and max_overAll depending upon the value of sum of the sub-array so far. 
				max_so_far =(int)Math.max(max_so_far,sum);
				max_overAll =(int)Math.max(max_so_far,max_overAll);
			}
    //finally printing the maximum sum of sub-array in the given array. 
			System.out.println(max_overAll);
		sc.close();
	}
}

