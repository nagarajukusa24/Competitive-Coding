#include<iostream>
using namespace std;
class Student
{
public:
	int id;
	string name;
};
int main(){
	Student s1;
	s1.id=1;
	s1.name="nagraj";
	cout << s1.id << " " << s1.name << endl;
 return 0;
}