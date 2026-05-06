#include <iostream>
using namespace std;
int main(){
    int a= 23;
    int *ptr = &a;
    cout<<(ptr==&a);
}
