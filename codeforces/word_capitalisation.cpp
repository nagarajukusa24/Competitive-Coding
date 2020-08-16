#include <iostream>
using namespace std;

int main() {
	char str[1000];
	cin >> str;
	// cout << putchar(toupper(str[0])) << endl;
	if(str[0]>=97 && str[0]<=122){
		str[0]=str[0]-32;
	}
	cout << str;
	return 0;
}