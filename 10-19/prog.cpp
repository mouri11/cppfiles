#include<iostream>
#include<cstdio>
using namespace std;
int cube(int x){ return x*x*x; }
int main()
{
	int x;
	cin>>x;
	printf("%d",cube(x+x));
}
