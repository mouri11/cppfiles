#include <iostream>
using namespace std;

int main() {
	int n,vote;
	static int arr[100];
	int i=0;
	cout<<"Enter no. of candidates:"<<endl;
	cin>>n;
	i=0;
	while(i<n){
	    cout<<"Enter vote for your candidate(1,2,3,4 or 5):"<<endl;
	    cin>>vote;
	    arr[vote]++;
	    i++;
	    if(vote==-1||vote>5)break;
	}
	i=0;
	while(i<n){
	    cout<<"Candidate "<<i+1<<" got "<<arr[i+1]<<" votes."<<endl;
	    i++;
	}
	return 0;
}
