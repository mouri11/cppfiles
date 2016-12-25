#include<iostream>
#include<cstdio>
#include<string>
#include<stdlib.h>
#include<cmath>
#define ll long long int
using namespace std;
class Person
{
    public:
    string name,code;
    void init(string a,string b)
    {
	name=a;
	code=b;
    }
    virtual void display()=0;
};
class Account:virtual public Person
{
    public:
    int pay;
    void init1(string a,string b,int c)
    {
	init(a,b);
	pay=c;
    }
    void display()
    {
	cout<<"Name= "<<name<<endl;
	cout<<"Code= "<<code<<endl;
	cout<<"Pay= "<<pay<<endl;
    }
};
class Admin:virtual public Person
{
    public:
    string exp;
    void init2(string a,string b,string c)
    {
	init(a,b);
	exp=c;
    }
    void display()
    {
	cout<<"Name= "<<name<<endl;
	cout<<"Code= "<<code<<endl;
	cout<<"Experience= "<<exp<<endl;
    }
};
class Master:public Account,public Admin
{
    public:
    void init3(string a,string b,string c,int d)
    {
	init1(a,b,d);
	init2(a,b,c);
    }
    void display()
    {
	cout<<"Name= "<<name<<endl;
	cout<<"Code= "<<code<<endl;
	cout<<"Experience= "<<exp<<endl;
	cout<<"Pay= "<<pay<<endl;
    }
};
int main()
{
    Master p;
    p.init3("A","0001","2 years",10000);
    p.display();
    return 0;
}

