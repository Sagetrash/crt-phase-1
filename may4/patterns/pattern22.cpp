#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num = 2*n-1;
    for(int i = 0; i <=num;i++){
        for(int j = 0; j<=num;j++){
            int m = min({i,j,num-i,num-j});
            cout<<n-m;
        }
        cout<<"\n";
    }
}
