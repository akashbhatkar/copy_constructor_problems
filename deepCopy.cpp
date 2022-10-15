#include <iostream>

using namespace std;

class deep
{

    int a;
    int *p;
public: deep()
    {
        cout<<"default constructor "<<endl;
    }

    deep(int x)
    {
        cout<<"parameterized constructor "<<endl;
        a=x;
        p=new int [a];
    }
    deep (const deep & obj)
    {
        cout<<"deep copy constructor"<<endl;
        a=obj.a;
        p=new int[a];
        for(auto i=0;i<a;i++)
        {
            p[i]=obj.p[i];
        }

    }
};

int main()
{
    deep a;
    deep b(10);
    a=b;
    deep c(a);
}
