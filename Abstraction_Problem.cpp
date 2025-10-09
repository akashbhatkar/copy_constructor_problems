/*Abstraction is the process of showing only necessary things to the user
and hiding the complex information and working*/

/* In the below example user can only see the accleration and brakes whereas he
doesnt have to care about how the mechanical things are happening inside the vahicle 
or its enging*/

#include <iostream>
#include <memory>
using namespace std;

class Vehicle
{
  public :
  
  virtual void accleration() = 0;
  virtual void brakes() = 0;
  
  Vehicle()
  {
      cout<<"calling base function"<<endl;
  }
};

class Car : public Vehicle
{
    public:
    string CarName;
    Car(string cartype)
    :CarName(cartype)
    {
        cout<<"car is "<<cartype;
    }
    
    void accleration()
    {
        cout<<CarName<<" has acclerator"<<endl;
    }
    
    void brakes()
    {
        cout<<CarName<<"car has brakes"<<endl;
    }
};

int main() 
{
    unique_ptr<Vehicle> carptr = make_unique<Car>("Ferrari");
    carptr->accleration();
    carptr->brakes();
}