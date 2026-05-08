#include <climits>
#include <iostream>
using namespace std;
int main(){
    int min=INT_MAX; int max=INT_MIN;
    int sec=INT_MIN;
    int arr[]={30,10,20,50,40};
    for(int i = 0;i<5;i++){
        if (arr[i]<=min){
            min = arr[i];
        }
        if (arr[i]>=max){
            sec = max;
            max = arr[i];
        }else if(arr[i]>sec){
            sec = arr[i];
        }
    }
    cout<<"min: "<<min<<"\n"<<"max: "<<max<<"\nSecond Largest: "<<sec;
}
