#include <iostream>
using namespace std;

int main(){
    int age = 21;
    bool citizen = true;
    bool canVote = age>=18 && citizen==true;
    cout << canVote;
    return 0;
}