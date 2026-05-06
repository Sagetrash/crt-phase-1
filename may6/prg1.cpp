// Classes Example
#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name; // Member variable
    int age;
    void greet(){ //member function
        cout<<"Hi! I am "<<name;
    }
};

int main(){
    Student a = Student();
    a.name = "Ayush"; //"." is called the member access operator
    a.greet();
    return 0;
}
