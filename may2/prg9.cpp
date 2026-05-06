//reverse of a number
#include <iostream>
using namespace std;
int main(){
    int n;
    int r=n%10;
    cin>>n;
    while(n!=0){
        n = n/10;
        r = (r*10)+n%10;
    }
    cout<<r;
    return  0;
}
