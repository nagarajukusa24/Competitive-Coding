//Initialize and Display data through method
#include<iostream>
using namespace std;
class Student{
    public:
        int id;
        string name;
        void insert(int i, string nam){
            id = i;
            name = nam;
        }
        void display(){
          cout << id << name << endl;
        }
};
int main(){
    Student s1;
    s1.insert(24,"nagaraj");
    s1.display();
    return 0;
}
