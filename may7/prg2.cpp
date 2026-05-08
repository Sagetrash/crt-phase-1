#include <iostream>
using namespace std;
class  Animal{
    public:
        void eat(){cout<<"Eating"<<endl;}
        virtual void speak()=0;

};

class Dog: public Animal{
    public:
        void speak(){
            cout<<"Bark"<<endl;
        }
};

class Cat: public Animal{
    public:
        void speak(){
            cout<<"Peak"<<endl;
        }
};
int main(){
    Dog d;
    d.eat();d.speak();
    return 0;
}
