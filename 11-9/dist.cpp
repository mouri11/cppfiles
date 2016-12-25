#include<iostream>
#include<cstdio>
using namespace std;
class DM
{
	int a,b;
	public:
		DM(){}
		DM(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		friend float convert(DM);
};
class DB
{
	float x,y;
	public:	
		DB(){}
		DB(float x,float y)
		{
			this->x=x;
			this->y=y;
		}
		friend float convert(DM obj1)
		{
			return obj1.a*2.25f;
		}
		void add(DM a)
		{
			y+=convert(a);
			printf("Total dist in inches is: %f",y);
		}
};
int main()
{
	DM a(10,0);
	DB b(0,6);
	b.add(a);
}
