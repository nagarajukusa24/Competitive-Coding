import java.util.*;
class CodeForces{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		// String str = new String(sc.next());
		char ch[] = sc.next();
		int c = 0;
		for(int i=0;i<str.length();i++){
			if(ch.charAt(i)!="{" || str.charAt(i)!="}" || str.charAt(i)!=","){
				c++;
			}
		}
		System.out.println(c);
	}
}