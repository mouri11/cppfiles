#include <iostream>
#include <cstdio>
using namespace std;
typedef struct consumer{
    int sl;
    char name[50];
    int units;
    float cost;
}consumer;
int costing(int n){
    float cost1=50;
    if(n<=100)cost1+=n*0.60;
    else if(n>100&&n<=300)cost1+=((n-100)*0.80)+60;
    else cost1+=140+(n-300)*0.90;
    if(cost1>300)cost1=cost1-(cost1*0.15);
    return cost1;
}
int main() {
    int count,i=0;
    count=1;
    consumer a[50];
	while(1){
	    a[i].sl=i+1;
	    cout<<"Enter name of Consumer:"<<endl;
	    scanf("%s",a[i].name);
	    cout<<"Enter no. of units:"<<endl;
	    cin>>a[i].units;
	    count++;
	    if(count>5)break;
	    i++;
	}
	i=0;
	cout<<"Sl No.\t"<<"Consumer\t"<<"Units\t"<<"Cost"<<endl;
	while(i<count){
	    a[i].cost=costing(a[i].units);
	    if(a[i].units!=-1&&a[i].units!=0)printf("%d  \t  %s\t\t%d\t%f\n",a[i].sl,a[i].name,a[i].units,a[i].cost);
	    i++;
	}
	return 0;
}
