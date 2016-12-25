#include<iostream>
#include<cstdio>
#include<string>
#include<stdlib.h>
#include<cmath>
#define ll long long int
using namespace std;
class Base
{
    public:
	void display()
	{
	    cout<<"Display Base"<<endl;
	}
	virtual void show()
	{
	    cout<<"Show Base"<<endl;
	}
};
class Derived:public Base
{
    public:
	void display()
	{
	    cout<<"Display Derived"<<endl;
	}
	void show()
	{
	    cout<<"Show Derived"<<endl;
	}
};
int main()
{
    Base b;
    Derived d;
    Base *bptr;
    bptr=&b;
    bptr->display();
    bptr->show();
    bptr=&d;
    bptr->display();
    bptr->show();
    return 0;
}

