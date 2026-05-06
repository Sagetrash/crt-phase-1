#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    bool isVowel=false;
    switch(c){
        case 'a':  
        case 'e':  
        case 'i':  
        case 'o': 
        case 'u': isVowel = true; break;
        default: isVowel = false;
    }
    if(isVowel){
        cout<<"vowel";
    }else cout<<"consonant";
    return 0;
}