#include<iostream>
using namespace std;
int main(){
    int bal=0;
    int opt;
    int amt;
    string menu = "\n\nWelcome to atm!!\nSelect an Option:\n 1.Withdraw \n 2.Deposit \n 3.Check Balanace\n 4.Exit \n Enter a Value: ";
    bool run = true;
    while (run){
        cout<<menu;
        cin>>opt;
        switch(opt){
            case 1:
                cout<<"Enter Amount: ";
                cin>>amt;//deposit
                if (amt <= bal){
                    bal = bal-amt;
                    cout<<"\n withdraw successful.";
                }else cout<<"insufficant balance\n";
                break;
                
            case 2:
                cout<<"Enter the amount to deposit:";
                cin>>amt;
                bal = bal+amt;
                break;
                
            case 3:
                cout<<"Current balance: "<<bal;
                break;
            case 4:
                cout<<"exiting.";
                run= false;   
                break;            
            default: cout<<"invalid Option";
        }
    }
}