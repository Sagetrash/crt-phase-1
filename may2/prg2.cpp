#include<iostream>
using namespace std;
int main(){
    string num;
    cin>>num;
    int left = 0;
    int right = num.size()-1;
    while(left<right){
        if (num[left]!=num[right]){
            cout<<"false";
            return 0;
        }
        left += 1;
        right -= 1;
    }
    cout<<"true";
    return 0;
}