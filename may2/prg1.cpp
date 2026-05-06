//prime number
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool prime=true;
    if (n<=1){
        prime = false;
    }
    if (n%2==0 || n%3==0){
        prime = false;
    }
    for(int i = 5; i*i<=n;++i){
        if(n%i==0){
            prime = false;
            break;
        }
    }
    cout<<prime;
    return 0;
}
