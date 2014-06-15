// 6.12.14
// TRICKY PROBLEM - ANSWER CAN BE LARGER THAN INTEGER.MAX_VALUE
import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		long n = in.nextInt();
		long m = in.nextInt();
		in.nextLine();

		double sum = 0;
		for(long i = 0; i < m; ++i) {
			String[] input = in.nextLine().split(" +");

			long begin = Integer.parseInt(input[0]);
			long end = Integer.parseInt(input[1]);
			long k = Integer.parseInt(input[2]);

			sum += ((end - begin + 1) * k);
		}

		long avg = (long) (sum / n);

		System.out.println(avg);
		in.close();
	}
}