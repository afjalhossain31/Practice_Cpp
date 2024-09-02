#include<iostream>
#include<iomanip>
#include<fstream>
#include<cctype>

using namespace std;

class Bank_Account{
    int account_number;
    int name[50];
    char type;
    int Money_Deposit;

    public:
    void create_account();
    void display_account();

};

void Bank_Account::create_account(){

    system("clss");
    cout<<"\t Enter the account number:";
    cin>>account_number;
    cout<<"\t Enter the name of the account holder";
    cin.ignore();
    //cin.getline(name,50);
    cout<<"\t Enter the type of the account (c/s):";
    cin>>type;

    type=toupper(type);
    cout<<"\t Enter the initial amount (>=500 for soving and>=100 for current)";
    cin>>Money_Deposit;
    cout<<endl;
    cout<<"\t Account Created.....:)";
    cout<<endl;
}

void Bank_Account::display_account(){
    cout<<"\t Bank Account number: "<<account_number<<endl;
    cout<<"\t Account holder name:"<<name<<endl;
    cout<<"\t Type of Account:"<<type<<endl;
    cout <<"\t Balance amount:"<<Money_Deposit<<endl;

}

int main(){
     Bank_Account B;
     B.create_account();
     B.display_account();
     return 0;

}
