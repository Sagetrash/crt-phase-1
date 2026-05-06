#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i<3; i++){
        for(int k = n; k> n-i; k--){
            cout<<" ";
        }
        for(int j=n; j>i;j--){
            cout<<"$ ";
        }
        cout<<"\n";
    }
   for (int x = 1; x<n-1;x++){
       for(int y=n-1;y>0;y--){
           cout<<" ";
       }
       for(int z = 0; z<=x+1;z++){
           cout<<"$ ";
       }
       cout<<"\n";
   }
}
