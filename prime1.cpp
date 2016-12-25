#include<iostream>
using namespace std;
#define MAX 32000
int prime[MAX],reqd_prime[MAX];
int total_primes=0;
int setToOne()
{
	int i;
	for(i=0;i<MAX;i++)prime[i]=1;
	return 0;
}
int findPrimes()
{
	prime[0]=prime[1]=0;
	int i,j;
	for(i=2;i<MAX;i++){
		if(prime[i]){
			for(j=2*i;j<MAX;j+=i){
				prime[j]=0;
			}
			reqd_prime[total_primes++]=i;
		}

	}
	return 0;
}
bool checkPrimes(int n)
{
	int i;
	bool flag=true;
	for(i=0;i<total_primes;i++){
		if(n%reqd_prime[i]==0 && n!=reqd_prime[i]){
			flag=false;
			break;
		}
	}
	if(flag&&n!=0&&n!=1)return true;
	else return false;

}
int main()
{
	setToOne();
	findPrimes();
	int i,t;
	/*for(i=0;i<100;i++){
		cout<<prime[i]<<" "<<reqd_prime[i]<<endl;
	}
	cout<<endl;*/
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		for(i=a;i<=b;i++){
			if(checkPrimes(i))cout<<i<<endl;	
		}
		cout<<endl;
	}
}
