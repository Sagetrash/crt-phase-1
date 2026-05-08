#include <cmath>
#include <iostream>
#include <ostream>
using namespace std;

class shape{
    public:
        virtual void perimeter()=0;
        virtual void area()=0;
        void ap(){
            int opt;
            cout<<"Select:\n1)Area\n2)Perimeter\n3)back\n::";
            cin>>opt;
            switch (opt) {
                case 1:
            {this->area(); break;}
                case 2:
            {this->perimeter(); break;}
                case 3:
                return;
            }
        }
};

class Circle: public shape{
    int radius;
    public:
        Circle(){
            cout<<"\nEnter the radius of the circle: ";
            cin>>this->radius;
        }
        void area(){
            cout<<"\n area of circle: "<<((3.14)*this->radius*this->radius)<<endl;
        }
        void perimeter(){
            cout<<"\n perimeter of circle: "<<(2*(3.14)*this->radius)<<endl;
        }
};

class Rectangle: public shape{
    int length,width;
    public:
        Rectangle(){
            cout<<"\nEnter the length and width respectively: ";
            cin>>this->length;
            cin>>this-> width;
        }
        void area(){
            cout<<"\n area of rectangle: "<<(this->length*this->width)<<endl;
        }
        void perimeter(){
            cout<<"\n perimeter of rectangel: "<< (2*(this->length+this->width))<<endl;
        }
};

class Square: public shape{
    int side;
    public:
        Square(){
            cout<<"\nEnter the side length: ";
            cin>>this->side;
        }
        void area(){
            cout<<"\n Area of Square: "<<(this->side*this->side)<<endl;
        }
        void perimeter(){
            cout<<"\n perimeter of squate: "<<(4*(this->side))<<endl;
        }
};

class Triangle: public shape{
    int a,b,c;
    public:
        Triangle(){
            cout<<"\nEnter the sides: ";
            cin>>a>>b>>c;
        }
        void area(){
            int s = (a+b+c)/2;
            cout<<"\n Area of triangle: "<<sqrt(((s)*(s-a)*(s-b)*(s-c)))<<endl;
        }
        void perimeter(){
            cout<<"\n perimeter of triangle: "<<a+b+c<<endl;
        }
};

int main(){
    while(true){
        cout<<"Choose:";
        cout<<"\n 1) Circle \n 2) Rectangle \n 3) Square \n 4) Triangle \n 5) Exit\n::";
        int opt;
        cin>>opt;
        switch (opt) {
            case 1:{
                Circle c;
                c.ap();
                break;}
            case 2:{
                Rectangle r;
                r.ap();
                break;
            }
            case 3:{
                Square s;
                s.ap();
                break;
            }
            case 4:{
                Triangle t;
                t.ap();
                break;
            }
            case 5: return 0;
        }
    }
}
