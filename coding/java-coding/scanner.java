import java.io.*;
import java.util.*;
class scanner{
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String str = sc.next();
		float k = sc.nextFloat();
		System.out.println("Id:" + n);
		System.out.println("Name" + str);
		System.out.println("Score:" + k);
	}
}