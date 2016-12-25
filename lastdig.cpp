#include<iostream>
using namespace std;
//#define long long int ll
long long modOfExpo(long long a,long long b,long long n)
{
	long long result=1;
	while(b){		
		cout<<a<<" "<<b<<" "<<result<<endl;
		if(b%2)result=(result*a)%n;
		b>>=1;
		a=(a*a)%n;
		cout<<a<<" "<<b<<" "<<result<<endl;
	}
	return result;
}
int main()
{
	long int t;
	cin>>t;
	long long a,b;
	while(t--){
		cin>>a>>b;
		cout<<modOfExpo(a,b,10)<<endl;	
	}
}
