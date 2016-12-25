/*Create a class FLOAT that contains one float data member. Overload all the four arithmetic operators so that they operate on the objects of FLOAT.
 */
#include<iostream>
#include<cstdio>
using namespace std;
class Float
{
	float x;
	public:
		Float(){}
		Float(float a){
			x=a;
		}
		Float operator+(Float);
		Float operator-(Float);
		Float operator*(Float);
		Float operator/(Float);
		void display(void);
};
Float Float::operator+(Float c)
{
	return Float(x+c.x);
}
Float Float::operator-(Float c)
{
	return Float(x-c.x);
}
Float Float::operator*(Float c)
{
	return Float(x*c.x);
}
Float Float::operator/(Float c)
{
	return Float(x/c.x);
}
void Float::display(void)
{
	printf("%f \n",x);
}
int main()
{
	Float f1,f2,f3;
	f1=Float(1.5);
	f2=Float(2.5);
	f3=f1+f2;
	printf("f1=");
	f1.display();
	printf("f2=");
	f2.display();
	cout<<"Sum is:"<<endl;
	printf("f3=");
	f3.display();
	cout<<"Difference is:"<<endl;
	f3=f1-f2;
	printf("f3=");
	f3.display();
	cout<<"Product is:"<<endl;
	f3=f1*f2;
	printf("f3=");
	f3.display();
	cout<<"Quotient is:"<<endl;
	f3=f1/f2;
	printf("f3=");
	f3.display();
	return 0;
}
