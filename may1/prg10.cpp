#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cin>>a>>op>>b;

    switch (op)
    {
    case '+': cout<<a+b ; break;
    case '-': cout<<a-b ; break;
    case '*': cout<<a*b ; break;
    case '/': if(b==0){cout<<"ZeroError";}else cout<<a/b ; break;
    case '%': if(b==0){cout<<"ZeroError";}else cout<<a%b ; break;
    
    default:
        cout<<"Invalid operation";
        break;
    }

    return 0;
}