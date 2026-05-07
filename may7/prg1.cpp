// OOPs
#include <iostream>
using namespace std;
class Student{
    int age;
    int marks;
    public:
    int getMarks(){
        return this->marks;
    }
    bool setMarks(int marks){
        if (marks>= 0) {this->marks=marks;}
        return true;
    }
};

int main(){
    Student s1;
    s1.setMarks(10);
    cout<<s1.getMarks();
}
