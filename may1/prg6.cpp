#include<iostream>
using namespace std;
int main(){
    
    int num;
    cin>>num;
    string p,v;

    if (num>0){
        p = "+ve";

        if (num%2==0){
            v = "even";
        }else v = "odd";

    }else if (num<0){
        
        p = "-ve";
        if (num%2==0){
        
            v="even";
        }else v="odd";
    }else{
        p = "neutral";
        v = "zero";
    }
    cout<<p<<" "<<v;
    return 0;
}