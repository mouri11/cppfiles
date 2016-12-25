#include<iostream>
//#include<stdlib>
//#include<array>
//#define N a.size()
#define swap(a,b) (a)=(((b)+(a))-((b)=(a)))
int input(int *a,int n)
{
	cout<<"Enter elements of array:";
	int i;
	for(i=0;i<n;i++)cin>>a+i;
	return 0;
}
int print(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)cout<<a[i];
}
int buildMaxHeap(int *a,int n)
{
	int i;
	for(i=n/2;i>=0;i--){
		maxHeapify(a,i,n);
	}
}
int maxHeapify(int *a,int i,int n)
{
	int left=2*i;
	int right=2*i+1;
	int largest;
	if(left<n && a[left]>a[i])largest=left;
	else if(right<n && a[right]>a[i])largest=right;
	else largest=i;
	if(largest!=i){
		swap(a[largest],a[i]);
		maxHeapify(a,largest,n);
	}
		
}
int heapSort(int *a,int n)
{
	buildMaxHeap(a,n);
	int i;
	for(i=n;i>=2;i--){
		swap(a[i],a[1]);
		cout<<a[i]<<" ";
		a[i]=0;
		maxHeapify(a,1,n);
	}
}
int main()
{
	int *a;
	a=(int *)malloc(sizeof(int));
	int n;
	cout<<"Enter size of array:";
	cin>>n;
	input(a,n);
	print(a,n);
	heapSort(a,n);
}
