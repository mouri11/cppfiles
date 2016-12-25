/*Write a function template for finding the minimum value contained in an array
 */
#include<iostream>
#include<cstdio>
#include<string>
#include<stdlib.h>
#include<cmath>
#define ll long long int
using namespace std;
template<class R>
//int n;
/*mini()
{
    //n=3;
    a=new R[3];
    for(int i=0;i<3;i++)a[i]=0;
}
mini(R* b)
{
    for(int i=0;i<n;i++)a[i]=b[i];
}*/
R minimum(R a[],int n)
{
    R m;
    m=a[0];
    for(int i=1;i<3;i++){
	if(m>a[i])m=a[i];
    }
    return m;
}
int main()
{
    int x[3]={10,21,3};
    //<int>;
    //m1=x;
    cout<<minimum(x,3)<<"\n";
    return 0;
}
