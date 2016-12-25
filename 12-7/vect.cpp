/*Write a class template to represent a generic vector. Include member functions to perform the
 * following taks:
 -> to create a vector   -> to modify the value of a given element   -> to multiply by a scalar
 value
 */
#include<iostream>
#include<cstdio>
#include<string>
#include<stdlib.h>
#include<cmath>
#define ll long long int
using namespace std;
//const int size=3;
template<class T>
class vector
{
    T *v;
    public:
	/*vector()
	{
	    v=new T[size];
	    for(int i=0;i<size;i++)v[i]=0;
	}*/
	void init(int size)
	{
	    v=new int[size];
	    cout<<"Enter values"<<endl;
	    for(int i=0;i<size;i++)cin>>v[i];
	}
	/*T operator*(vector &y)
	{
	    T sum=0;
	    for(int i=0;i<3;i++)sum+=this->v[i]*y.v[i];
	    return sum;
	}*/
	T multiply(vector &a,vector &b)
	{
	    T sum=0;
	    for(int i=0;i<3;i++)sum+=a.v[i]*b.v[i];
	    return sum;
	}
};
int main()
{
    /*int x[3]={1,2,3};
    int y[3]={4,5,6};*/
    //cout<<"lol2"<<endl;
    vector<int> v1;
    vector<int> v2;
    vector<int> v;
    cout<<"Enter 3 values for v1:"<<endl;
    v1.init(3);
    cout<<"Enter 3 values for v2:"<<endl;
    v2.init(3);
    /*v1=x;
    v2=y;*/
    //cout<<"lol"<<endl;
    //int R=v1*v2;
    cout<<"Product="<<v.multiply(v1,v2)<<"\n";
    return 0;
}
