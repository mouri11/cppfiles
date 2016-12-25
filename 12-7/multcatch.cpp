/*
 Write a program containing a possible exception. Perform exception handling with multiple catch
 */
#include<iostream>
#include<cstdio>
#include<string>
#include<stdlib.h>
#include<cmath>
#define ll long long int
using namespace std;
void excp()
{
    int x=4;
    int y=4;
    if(x==y)throw(x-y);
    else cout<<"Its fine"<<endl;
}
int main()
{
    try{
	excp();
    }
    catch(int i){
	cout<<"Both are equal."<<endl;
    }
    catch(char c)
    {
	cout<<"Character is found."<<endl;
    }
    return 0;
}

