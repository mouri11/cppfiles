#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int nextPalin(char s[])
{
	int l=strlen(s);
	char a[l];
	int i,j,mid=l/2;
	i=0;
	j=l%2==0?mid:mid+1;
	while(1){
		if(l%2==0&&i<mid)a[i]=s[i];
		else if(i<=mid)a[i]=s[i];
		else break;
		i++;
	}
	i=mid-1;
	while(i>=0){
		a[j++]=a[i--];
	}
	if(atoi(s)>=atoi(a)){
		if(l%2==0)a[mid]=a[mid-1]=48+a[mid]-'0'+1;
		else a[mid]=48+a[mid]-'0'+1;
	}
	for(i=0;i<strlen(a);i++){
		if(isdigit(a[i]))printf("%c",a[i]);
	}
	printf("\n");
}
int main()
{
	int t=0;
	char str[1000000];
	cin>>t;
	while(t--){
		cin>>str;
		nextPalin(str);
	}
}
