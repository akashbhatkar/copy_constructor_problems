/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class abc
{
    int i;
    int *p;
    public: abc()
    {
        cout<<"default constructor"<<endl;
    }
    
    abc(int x): i(x){
        p=new int [i];
        cout<<"parameterized constructor "<<endl;
    }
    
    abc(const abc& obj): i(obj.i),p(new int[i])
    {
     cout<<"copy constructor"   <<endl;
    }
    
    void operator =(const abc&obj1)
    {
        i=obj1.i;
        p=new int [i];
        cout<<"copy assignment"<<endl;
    }
};

int main()
{
    abc obj2;
    abc obj3(11);
    abc obj4(obj3);
    abc obj5;
    obj5=obj3;
    
}