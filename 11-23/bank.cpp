/*See question in balaguruswamy, pg 262*/
#include<iostream>
#include<cstdio>
#include<string>
#include<stdlib.h>
#include<cmath>
#define ll long long int
using namespace std;
class Account
{
    string customer_name,acct_type;
    ll acct;
};
class Cur_acct:public Account
{
    double balance,minBal;
    public:
	void setbal(double a,double b)
	{
	    balance=a;
	    minBal=b;
	}
	void withdrawal(int n)
	{
	    if(balance<minBal)balance-=(balance*0.10);
	    else if(n>balance)printf("Insufficient balance.\n");
	    else balance-=n;
	}
	void deposit(int n)
	{
	    balance+=n;
	}
	void cheque()
	{}
	void show()
	{
	    printf("Current balance=%.2f\n",balance);
	}
};
class Sav_acct:public Account
{
    double balance;
    public:
	void setbal(double a)
	{
	    balance=a;
	}
	void withdrawal(int n)
	{
	    if(n>balance)printf("Insufficient balance.\n");
	    else balance-=n;
	}
	void deposit(int n)
	{
	    balance+=n;
	}
	void interest()
	{
	    balance+=(balance*0.20);
	}
	void show()
	{
	    printf("Current balance:%.2f\n",balance);
	}
};
int main()
{
    cout<<"Enter type of account(s for savings, c for current):"<<endl;
    char c;
    cin>>c;
    cout<<"Enter balance:"<<endl;
    int bal;
    cin>>bal;
    if(c=='c'){
	cout<<"Enter minimum balance:"<<endl;
	int minbal;
	cin>>minbal;
	Cur_acct c1;
	c1.setbal(bal,minbal);
	cout<<"Enter amount to deposit:"<<endl;
	int n;
	cin>>n;
	cout<<"Do you want to use cheque or cash?(c for cheque).."<<endl;
	char c;
	cin>>c;
	if(c=='c')c1.cheque();
	c1.deposit(n);
	cout<<"Deposited: Rs."<<n<<"\n";
	c1.show();
	cout<<"Enter amount to withdraw:"<<endl;
	cin>>n;
	c1.withdrawal(n);
	cout<<"Withdrawal: Rs."<<n<<"\n";
	c1.show();
	cout<<"Enter amount to withdraw:"<<endl;
	cin>>n;
	c1.withdrawal(n);
	cout<<"Withdrawal: Rs."<<n<<"\n";
	c1.show();
    }
    else{
	Sav_acct s1;
	s1.setbal(bal);
	cout<<"Enter amount to deposit:"<<endl;
	int n;
	cin>>n;
	s1.deposit(n);
	cout<<"Deposited: Rs."<<n<<"\n";
	s1.show();
	cout<<"Enter amount to withdraw:"<<endl;
        cin>>n;
	s1.withdrawal(n);
	cout<<"Withdrawal: Rs."<<n<<"\n";
	s1.show();
    	cout<<"Enter amount to withdraw:"<<endl;
        cin>>n;
	s1.withdrawal(n);
	cout<<"Withdrawal: Rs."<<n<<"\n";
	s1.show();
	
	cout<<"Adding interest of 0.20 to current balance:"<<endl;
	s1.interest();
	s1.show();
    }
    return 0;
}

