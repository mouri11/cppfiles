#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int nextPalin(string s)
{
	int l=s.size();
	string str,str1,str2;
	int i,j,mid=l/2;
	i=0;
	j=l%2==0?mid:mid+1;//setting mid according to whether string is of even or odd length
	str=s.substr(0,j);
	reverse(str.begin(),str.end());
	//str+="0";
	//cout<<str<<endl;
	//cout<<s.substr(mid);
	bool isnine=true;
	//increasing half of palindrome
	if(atoi(str.c_str())<=atoi((s.substr(mid)).c_str())){
		str+="0";
		for(int i=0;i<=str.size();i++){
			if(str[i]=='9'){
				str[i]=48+str[i]-'0'-9;
				//if(i==0)str.erase(str.begin());
				isnine=true;
				continue;
			}
			else{//if(str[i]!='9'){
				if(isnine)isnine=false;
				str[i]=48+str[i]-'0'+1;
				break;
			}
		}
	}
	//making the mirror palindrome
	if(str[str.size()-1]=='0')str.erase(str.begin()+(str.size()-1));
	if(l%2==0)str1=str.substr(0);
	else str1=str.substr(1);
	reverse(str1.begin(),str1.end());
	/*if(l%2==0)*/str=str1+str;
	/*else str=str+s[mid]+str1;*/
	cout<<str;
	//cout<<str1;
	//increasing middle elements by 1 after checking the two strings
	
	//cout<<str;
	/*for(i=0;i<strlen(a);i++){
		if(isdigit(a[i]))printf("%c",a[i]);
	}*/
	printf("\n");
}
int main()
{
	int t=0;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		nextPalin(s);
	}
}
