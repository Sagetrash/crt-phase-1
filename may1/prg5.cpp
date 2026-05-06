#include <iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if (marks>=90) cout<<'A';
    else if (marks>=80) cout<<'B';
    else if (marks>=70) cout<<'C';
    else cout<<'F';
    return 0;
}