/*
 Write a program to demonstrate the concept of rethrowing an exception
 */
#include<iostream>
#include<cstdio>
#include<string>
#include<stdlib.h>
#include<cmath>
#define ll long long int
using namespace std;
void excp1()
{
    int x=9;
    int y=7;
    if(x-y==2)throw('A');
    else cout<<"Its fine."<<endl;
}
int main()
{
    try{
	excp1();
    }
    catch(char c){
	if(c=='B')cout<<"The diff is 2."<<endl;
	else throw;
    }
    return 0;
}

