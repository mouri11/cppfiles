#include<iostream>
#include<string>
using namespace std;
int main()
{
	char s[]={'1','2'},str[2];
	cout<<str<<endl;
	str[1]=((s[1]-'0')+10-(s[0]-'0'))/2;
	cout<<str[1]<<endl;
}
