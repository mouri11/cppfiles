#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int decrypt(int n,string s)
{
	vector< vector<char> > v;
	int rows=s.size()/n;
	bool direction=true;
	for(int i=0,k=0;i<rows;i++,direction=!direction){
		vector<char> r;
		for(int j=0;j<n;j++){
			r.push_back(s[k++]);
		}
		if(direction)reverse(r.begin(),r.end());
		v.push_back(r);
	}
	for(int j=n-1;j>=0;j--)for(int i=0;i<rows;i++)printf("%c",v[i][j]);
	cout<<endl;
}
int main()
{
	int n;
	string s;
	while(1){
		cin>>n;
		if(n!=0){
			cin>>s;
			decrypt(n,s);
		}
		else break;
	}
}
