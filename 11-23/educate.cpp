/* An educational institution wishes to maintain a database of its employees. The database is
 * divided into a number of classes whose hierarchical relationships are shown in figure. The
 * figure also shows the minimum information required for each class. Specify all the classes and
 * define functions to create the database and retrieve individual information as and when
 * required. pg 263
 */
#include<iostream>
#include<cstdio>
#include<string>
#include<stdlib.h>
#define ll long long int
using namespace std;
class Staff
{
    string code,name;
    public:
    Staff(){}
    void init(string a,string b)
    {
	code=a;
	name=b;
    }
    void getS()
    {
	cout<<"Code= "<<code<<endl;
	cout<<"Name= "<<name<<endl;
    }
};
class Teacher:public Staff
{
    string subj,publ;
    public:
    Teacher(){}
    void init1(string c,string d,string a,string b)
    {
	init(c,d);
	subj=a;
	publ=b;
    }
    void getT()
    {
	getS();
	cout<<"Subject= "<<subj<<endl;
	cout<<"Publication= "<<publ<<endl;
    }
};
class Typist:public Staff
{
    double speed;
    public:
    Typist(){}
    void init1(string a,string b,double d){
	init(a,b);
	speed=d;
    }
    void getT2()
    {
	getS();
	cout<<"Speed= "<<speed<<" Words per minute."<<endl;
    }
};
class Officer:public Staff
{
    string grade;
    public:
    Officer(){}
    void init1(string b,string c,string a){
	init(b,c);
	grade=a;
    }
    void getO()
    {
	getS();
	cout<<"Grade= "<<grade<<"\n";
    }
};
class Regular:public Typist
{
    public:
    Regular(){}
    void init2(string a,string b,int s)
    {
	init1(a,b,s);
    }
    void getR()
    {
	getT2();
    }
};
class Casual:public Typist
{
    int wages;
    public:
    Casual(){}
    void init2(string a,string b,int s,int t)
    {
	init1(a,b,s);
	wages=t;
    }
    void getC()
    {
	getT2();
	cout<<"Daily Wages= "<<wages<<endl;
    }
};
int main()
{
    Teacher t;
    cout<<"Staff: Teacher"<<endl;
    t.init1("0001","A","Maths","Srijan");
    t.getT();
    Officer o;
    cout<<"Staff: Officer"<<endl;
    o.init1("1001","B","A");
    o.getO();
    cout<<"Staff: Typist(Regular)"<<endl;
    Regular r;
    r.init2("2001","C",30);
    r.getR();
    cout<<"Staff: Typist(Casual)"<<endl;
    Casual c;
    c.init2("2002","D",30,10000);
    c.getC();
    return 0;
}
