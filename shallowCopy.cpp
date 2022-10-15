#include <iostream>

using namespace std;
class shallow
{

    int i,*ip;
public:
    shallow ()
    {
        cout<<"default constructor"<<endl;
    }
    shallow(int a)
    {
        cout<<"parameterized constructor"<<endl;
        i=a;
        ip=new int[i];
    }
    void display()
    {
        cout<<&ip<<endl;
    }

};

int main()
{
    shallow obj;
    shallow obj1(10);
    obj=obj1;
    obj.display();
    obj1.display();


}
