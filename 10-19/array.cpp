/* using function, take array(s) and size as input and:
   ->return largest and smallest element
   ->search an element and return 1 if present, 0 if absent.
 */
#include<iostream>
#include<cstdio>
#define swap(a,b) (a)=(b)-(a)+((b)=(a))
using namespace std;
/*int* sort(int a[],int size)
{
	for(int i=size;i>=0;i--){
		for(int j=0;j<=i;j++){
			if(a[j]>a[j+1])swap(a[j],a[j+1]);
		}
	}
	return a;
}*/
int largest(int a[],int size)
{
	int largest=a[0];
	for(int i=1;i<size;i++)if(a[i]>largest)largest=a[i];
	return largest;
}
int smallest(int a[],int size)
{
	int smallest=a[0];
	for(int i=1;i<size;i++)if(a[i]<smallest)smallest=a[i];
	return smallest;
}
int search(int a[],int size,int key)
{
	int flag=0;
	for(int i=0;i<size;i++){if(key==a[i]){flag=1; break; }}
	if(flag==1)return 1;
	else return 0;
}
int main()
{
	int n;
	printf("Enter a size for array: \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements for array: \n");
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	printf("\n");
	printf("Largest element is %d \n",largest(a,n));
	printf("Smallest element is %d \n",smallest(a,n));
	int key=0;
	printf("Enter key to be searched:\n");
	scanf("%d",&key);
	if(search(a,n,key)==1)printf("Element %d was found in array.\n",key);
	else printf("Element %d was not found in array.\n",key);
}
