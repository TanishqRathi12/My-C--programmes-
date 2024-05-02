#include <iostream>
#include <string>
using namespace std;
class Bank{
    public:
   string Holder_name;
    double Account_no;
    double Balance=10000;
    double Amount;
    void Deposit();
    void Withdraw();
   
};
void Bank::Deposit(){
    cout<<"Current Balnce"<<Balance<<endl;
   cout<<"Enter the Amount You Deposited:"<<endl;
   cin>>Amount;
   Balance += Amount;
   cout<<"Updated Balance:"<<Balance<<endl;
   
};
void Bank::Withdraw()
{
    double ne;
    cout<<"Now Enter The Amount You want to Withdraw:"<<endl;
    cin>>ne;
    Balance -=ne;
    cout<<"Updated Balance:"<<Balance<<endl;
};
int main(){
    Bank ob;
    ob.Deposit();
    ob.Withdraw();
    return 0;
}
