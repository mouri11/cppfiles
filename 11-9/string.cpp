/* create String class having one uninitialized and a parameterized constructor
 */
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class String
{
	public:
	string s;
	String(){s="";}
	String(string str)
	{
		s=str;
	}
	void concat(string s2)
	{
		s=s+s2;
	}
	void display()
	{
		cout<<s<<endl;
	}
};
int main()
{
	String s2("Hello ");
	s2.concat("World");
	s2.display();
}
