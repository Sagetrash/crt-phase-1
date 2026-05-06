#include <iostream>
using namespace std;
void swapp(int* p, int* q){ //call by pointer
    int temp = *p;
    *p = *q;
    *q = temp;
}

void swapp(int &p, int &q){ //call by reference
    int temp = p;
    p = q;
    q = temp;
}
int main(){
    int a=10;
    int b = 20;
    cout<<a<<":"<<b<<"\n";
    swapp(a,b);
    cout<<a<<":"<<b<<"\n";
}
