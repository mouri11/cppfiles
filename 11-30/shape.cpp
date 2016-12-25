#include<iostream>
#include<cstdio>
#include<string>
#include<stdlib.h>
#include<cmath>
#define ll long long int
using namespace std;
class Shape
{
    public:
    double l,b;
    void getData(double _l,double _b)
    {
	l=_l;
	b=_b;
    }
    virtual void display()
    {
	cout<<"Area ="<<(l*b)<<"\n";
    }
};
class Triangle:public Shape
{
    public:
    /*void getData(double _l,double _b)
    {
	base=_l;
	height=_b;
    }
*/
    void display()
    {
	cout<<"Area of triangle="<<(0.5*b*l)<<"\n";
	//cout<<endl;
    }
};
class Rectangle:public Shape
{
    public:
    /*void getData(double _l,double _b)
    {
	length=_l;
	breadth=_b;
    }
*/
    void display()
    {
	cout<<"Area of triangle="<<(l*b)<<"\n";
	//cout<<endl;
    }
};
int main()
{
    Triangle t;
    Rectangle r;
    /*cout<<"Enter base and height for triangle:"<<"\n";
    double l,b;
    //Shape *ptr;
    //cin<<l<<b;
    scanf("%lf%lf",&l,&b);
    //ptr=&t;*/
    t.getData(4,5);
    t.display();
    //cout<<"Enter length and breadth for rectangle"<<"\n";
    //cin<<l<<b;
    //scanf("%lf%lf",&l,&b);
    //ptr=&r;
    r.getData(4,5);
    r.display();
    return 0;
}

