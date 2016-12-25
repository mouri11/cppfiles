/* to calculate factorial of a number using function
 */
#include<iostream>
#include<cstdio>
using namespace std;
int fact(int d)
{
	int f=1;
	while(d)f*=d--;
	return f;
}
int main()
{
	printf("Enter no. to calculate factorial:\n");
	int n=0;
	scanf("%d",&n);
	printf("The factorial of %d is %d \n",n,fact(n));
}
