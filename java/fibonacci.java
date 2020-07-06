import java.util.Scanner;
import java.io.*;
class fibonacci{
	public static void main(String[] args) throws IOException {
		InputStreamReader obj = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(obj);

		int n = Integer.parseInt(br.readLine());
		long f1 = 0, f2 = 1;
		System.out.println(f1);
		System.out.println(f2);
		long f=f1+f2;
		System.out.println(f1+f2);	
		int k=3;
		while(k<n)
		{
			f1=f2;
			f2=f;
			f=f1+f2;
			System.out.println(f);
			k++;
		}
	}
}