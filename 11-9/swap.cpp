/* create two classes and put integer values and swap the values using friend function
 */
#include<iostream>
#include<cstdio>
using namespace std;
class Swap
{
	int n;
	public:	
		Swap(){}
		Swap(int n)
		{
			this->n=n;
		}
		void show()
		{
			printf("%d \n",n);
		}
		friend void swap(Swap,Swap);
};
class Swap2
{
	public:
		friend void swap(Swap a,Swap b)
		{
			Swap temp;
			printf("\na=");
			a.show();
			printf("\nb=");
			b.show();
			printf("\nAfter swap:\n");
			temp.n=a.n;
			a.n=b.n;
			b.n=temp.n;
			printf("\na=");
			a.show();
			printf("\nb=");
			b.show();

		}
	
};
/*class Swap2
{
	friend void swap()
	{
		Swap s;
		int temp=
	}
};*/
int main()
{
	Swap a(10);
	Swap b(20);
	/*printf("Before swap: \n");
	s.show();
	printf("After swap: \n");*/
	Swap2 s;
	swap(a,b);
}
