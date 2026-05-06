// destructor (~)
// this keyword
#include <iostream>
#include <string>
using namespace std;

class Student{
    int age; string name;
    public:
    Student(string name, int age){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<"\n"<<name<<":"<<age;
    }
    ~Student(){
        cout<<"\n obejct destroyed";
    }
};

int main(){
    Student s1("ayush", 21);
    s1.display();
    return 0;
}
