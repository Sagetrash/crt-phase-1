// Constructors
#include <iostream>
using namespace std;
class Student{
    int age;
    public:
    string name;

    Student(){}//default constructor

    Student(string a,int b){
        name = a; age = b;
    }//parameterized constructor


};

int main(){
    Student s1("Ayush",21);
    Student s2=s1;
    s2.name = "Sharma";
    cout<<s1.name;

    return 0;
}
