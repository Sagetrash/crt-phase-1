#include <iostream>
using namespace std;
int main(){
    int a = 5, b= 1, c=2;
    if (a>b){
        if (a>c){
            cout<<a;
        }else cout<<c;

    }else if(b>c) cout<<b;
    else cout<<c;
    return 0;
}

// max({a,b,c})