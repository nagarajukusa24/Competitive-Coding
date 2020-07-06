import java.io.*;
import java.util.*;
class classes{
	public static void main(String[] args) {
		for(String s:args)
		{
			System.out.println(s);
		}
	}
}

class classes1{
	public static void main(String[] args) {
		String[] names = {"nagaraj","Kusa","Reddy"};
		classes.main(names);
	}
}