/*Add complex numbers and pass objects as argument and also return object.
 */
#include<iostream>
#include<cstdio>
using namespace std;
class Complex
{
	public:
		int x,y;
		Complex(){}
		Complex(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		static Complex sum(Complex a,Complex b)
		{
			Complex c;
			c.x=a.x+b.x;
			c.y=a.y+b.y;
			return c;
		}
		void display()
		{
			printf("THe number is %d+%di.\n",x,y);
		}
};
int main()
{
	Complex c1(10,20);
	c1.display();
	Complex c2(20,30);
	c2.display();
	printf("After addition:\n");
	Complex c3;
	c3=Complex::sum(c1,c2);
	c3.display();
}
