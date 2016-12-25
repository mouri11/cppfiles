/* multiply two matrices
 */
#include<iostream>
#include<cstdio>
using namespace std;
int a[100][100],b[100][100],c[100][100];
int multiply(int rows,int cols,int k)
{
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			for(int l=0;l<k;l++){
				c[i][j]+=a[i][l] * b[l][j];
			}
		}
	}
}	
int main()
{
	int row1,row2,col1,col2;
	printf("Enter row and column for first matrix: \n");
	scanf("%d%d",&row1,&col1);
	printf("Enter row and column for second matrix:\n");
	scanf("%d%d",&row2,&col2);
	printf("Enter elements for 1st matrix:\n");
	for(int i=0;i<row1;i++)for(int j=0;j<col1;j++)scanf("%d",&a[i][j]);
	printf("Enter elements for 2nd matrix:\n");
	for(int i=0;i<row2;i++)for(int j=0;j<col2;j++)scanf("%d",&b[i][j]);
	//printf("lol");
	/*int a[row1][col1];
	int b[row2][col2];
	int c[row1][col2];
	*/if(row2==col1){
		multiply(row1,col2,col1);
		for(int i=0;i<row1;i++){
			for(int j=0;j<col2;j++)printf("%d ",c[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	else printf("The matrices are not multiplication compatible.");

}
