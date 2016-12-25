/* Define a class STRING. Use overloaded == operator to compare two strings.
 */
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class String
{
	string s;
	public:
	String(){
		s="";
	}
	String(string _s)
	{
		s=_s;
	}
	string operator==(String);
	//void display(void);
};
string String::operator==(String str)
{
	if(s==str.s){
		return "Equals\n";
	}
	else return "Not equals\n";
}
int main()
{
	String s1("Hello"),s2("Hola"),s3("Hello");
	cout<<"Comparing Hello and Hola:"<<endl;
	cout<<(s1==s2);
	cout<<"Comparing Hello and Hello:"<<endl;
	cout<<(s1==s3);
}
