#include <iostream>
using namespace std;
int main(){
    int x = 4;
    int &y = x;
    y = 9;
    cout<<y;
}
