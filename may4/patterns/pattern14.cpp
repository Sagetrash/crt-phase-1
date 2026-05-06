#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i <n;i++){
        for(char ch = 'A'; (int)ch<=((int)'A'+i) ;ch++){
            cout<<ch;
        }
        cout<<"\n";
    }
}
