
***ENCAPSULATION****/

/*Defination :- Binding the data and functions into one form is called as encapsulation
There are two entities which should be managed  Lets suppose we are designing a banking system where we are dealing
with the data and functions..

For ex. we are designing a program for banking system.

Here Data is the account and money
where functions are deposit, withdrawl, view balance

Lets take following example*/

#include <iostream>
#include <memory>
using namespace std;

class Bank
{
  public:
  int Balance = 0;
  Bank()
  {
      cout<<"state bank of India"<<endl;
  }
  
  int ViewBalance()
  {
    return Balance;
  }
  
  void Deposite(int amount)
  {
    Balance = Balance + amount;
    cout<<"Balance is = "<<ViewBalance()<<endl;
  }
  
  void withdrawl(int amount)
  {
    Balance = Balance - amount;
    cout<<"Balance is = "<<ViewBalance()<<endl;
  }
  ~Bank()
  {
      cout<<"Transaction complete Account closed"<<endl;
  }
};

int main()
{
    unique_ptr<Bank> b = make_unique<Bank>();
    cout<<"Balance is  = "<<b->ViewBalance()<<endl;
    b->Deposite(100000);
    b->withdrawl(5000);
}
