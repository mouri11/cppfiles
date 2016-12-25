#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int p=floor(sqrt(n));
	for(int i=1;i<=p;i++){
		sum+=floor(n/i)-(i-1);
	}
	cout<<sum;
	return 0;
}
