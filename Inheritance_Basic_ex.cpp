/*INHERITANCE*/

/*Inheritance is the mechanism in c++ which allows us to inherite the features of
one class to another class*/

/* Consider a below example where every Mobile has a Camera and Screen such as
Now when the Android or Iphone is created it will automatically take the
camera and screen as a basic functonality and other than that they have their own
functions as well such as PlayStore and AppleStore respectively*/

#include <iostream>
#include <memory>

using namespace std;

class Mobile // Base class
{
public :
	void Camera()
	{
		cout<<"Mobile havig a camera function"<<endl;
	}
	void Screen()
	{
		cout<<"Mobile having a screen"<<endl;
	}
};

class Android : public Mobile
{
public :
	Android()
	{
		cout<<"Manufacturing a android Mobile"<<endl;
	}

	void PlayStore()
	{
		cout<<"Android Mobile Having a PlayStore app"<<endl;
	}
};

class Iphone : public Mobile
{
public :
	Iphone()
	{
		cout<<"Manufacturing a Iphone"<<endl;
	}

	void AppleStore()
	{
		cout<<"Iphone Having a AppleStore app"<<endl;
	}
};


int main()
{
	unique_ptr<Android> aptr = make_unique<Android>();
	aptr->Camera();
	aptr->Screen();
	aptr->PlayStore();

	unique_ptr<Iphone> iptr = make_unique<Iphone>();
	iptr->Camera();
	iptr->Screen();
	iptr->AppleStore();
}