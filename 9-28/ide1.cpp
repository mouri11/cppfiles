#include <iostream>
#include<cstdio>
using namespace std;
typedef struct player{
    char name[50];
    int runs;
    int innings;
    int not_out;
    float avg;
}player;
int main() {
	printf("Enter no. of players:\n");
	int n;
	scanf("%d",&n);
	player a[n];
	for(int i=0;i<n;i++){
	    printf("Enter name, runs, innings, and not-out for player %d: \n",(i+1));
	    scanf("%s",a[i].name);
	    scanf("%d %d %d",&a[i].runs,&a[i].innings,&a[i].not_out);
	}
	for(int i=0;i<n;i++){
	    a[i].avg=1.0*a[i].runs/(a[i].innings-a[i].not_out);
	}
	printf("Name\tRuns\tInnings\t\tNot Out\t\tAverage \n");
	for(int i=0;i<n;i++){
	    printf("%s\t%d\t%d\t\t%d\t\t%f \n",a[i].name,a[i].runs,a[i].innings,a[i].not_out,a[i].avg);
	}
	return 0;
}
