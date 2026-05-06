#include<iostream>
using namespace std;
int main(){
    int a=1,b=2,c=3;
    char d = '\0';
    if(a,b,c,d) cout<<"Lion";
    else cout<<"Penguin";//left operand of comma operator has no effect
    cout<<a;
    return 0;
}