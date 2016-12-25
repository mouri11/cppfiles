#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
//#include<ctype>
using namespace std;
char n[105],x[105];
int div(char a[])
{
	char result[strlen(a)];
	for(int k=0,l=0;k<strlen(a);k++,l++){
		if((a[k]-'0'-48)%2==0)result[l]=48+((a[k]-'0'-48)/2);
		else result[l]=48+((((a[k]-'0'-48)%2)*10+(a[k+1]-'0'-48))/2);
	}
	for(int i=0;i<strlen(result);i++)if(isdigit(result[i]))printf("%c",result[i]);	
}
/*int op()
{
	char str[105],part1[105],part2[105];
	bool flag=false;
	for(int i=strlen(n)-1,j=strlen(x)-1;i>=0||j>=0;i--,j--){
		if(flag)n[i]-=1;
		if(n[i]<x[j]&&j>=0){
			str[i]=48+(10+(n[i]-'0')-(x[j]-'0'));
			flag=true;
		}
		else if(n[i]>x[j]&&j>=0)str[i]=48+(n[i]-'0')-(x[j]-'0');
		else str[i]=48+(n[i]-'0');
	}
	for(int i=0;i<strlen(str);i++)if(isdigit(str[i]))printf("%c",str[i]);
}*/
int main()
{
	int t=10;
	cin>>n;
	//cin>>x;
	/*while(t--){
		scanf("%lld%d",&n,&x);
		printf("%lld\n%lld\n",op(n,x)+x,op(n,x));
	}*/
	//op();
	div(n);
}
