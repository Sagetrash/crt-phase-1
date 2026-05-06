#include <iostream>
#include <string>
using namespace std;
class Customer{
    int balance=0;
    int pin;
    string name;
    public:
    Customer(string name,int openingBalance){
        this->name = name;
        this->balance = openingBalance;
    }
    void showBalance(){
        cout<<"\nYour Current Balance is: "<<balance;
    }
    void addBalance(){
        int amount;
        cout<<"\n Enter the amount: ";
        cin>>amount;
        balance += amount;
        cout<<"\nAdded balance successfully";
    }
    void withDraw(){
        int amt;
        cout<<"\nEnter the amount to withdraw: ";
        cin>>amt;
        if (amt > this->balance){
            cout<<"\nInsufficiant balance\n";
        }else{
        this->balance -= amt;
        cout<<"\nwithdrew balance";}
    }
};
int main(){
    Customer c1("Ayush",10000);
    int opt;
    string menu = "\n\nWelcome to atm!!\nSelect an Option:\n 1.Withdraw \n 2.Deposit \n 3.Check Balanace\n 4.Exit \n Enter a Value: ";
    bool run = true;
    while(run){
        cout<<menu;
        cin>>opt;
    switch (opt) {
        case 1:
            c1.withDraw(); break;
        case 2:
            c1.addBalance();break;
        case 3:
            c1.showBalance(); break;
        case 4:
        cout<<"\n exiting atm \n";
            run = false; break;
        default:
        cout<<"\n enter a valid option \n";

    }
    }
    return 0;

    }
