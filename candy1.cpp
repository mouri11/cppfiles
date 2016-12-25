#include<iostream>
#include<cmath>
using namespace std;
long int a,n;
int arr[10001];
int b;
int main()
{
	while(1){
		cin>>n;
		b=0;
		if(n==-1)break;
		a=0;
		while(a<n){
			cin>>arr[a];
			b+=arr[a];
			a++;
		}
		a=0;
		int count=0;
		if(b%n==0){
			int avg=b/n;
			//int large=abs(avg-arr[0]);
			int i=0;
			while(i<n){
				if(avg>arr[i])count+=abs(avg-arr[i]);
				i++;
				//int diff=abs(avg-arr[i++]);
				/*if(diff>=large){
					large=diff;
				}*/
			}
		cout<<count<<endl;
		}
		else cout<<-1<<endl;
	}
}
