/* find out the sum of the series using function:
   1+22+32+42+....till n terms(taking n as parameter) and return sum of the series.
 */
#include<iostream>
#include<cstdio>
using namespace std;
int sum(int n)
{
	int s=12,add=0;
	int count=0;
	while(count<n){
		s+=((count++)*10);
		add+=s;
	}
	return add-11;
}
int main()
{
	int n;
	printf("Enter no of terms: \n");
	scanf("%d",&n);
	printf("The sum of series is %d.\n",sum(n));
}
