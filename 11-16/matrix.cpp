/*Create a class MAT of size mxn. Define all possible matrix operations for MAT type objects
 */
#include<iostream>
#include<cstdio>
using namespace std;
class Matrix
{
	int r,c;
	public:
	int a[100][100];
	Matrix(){}
	Matrix(int row,int col)
	{
		r=row;c=col;
	}
	Matrix operator+(Matrix);
	Matrix operator-(Matrix);
	Matrix operator*(Matrix);
	void input(void);
	void display(void);
};
Matrix Matrix::operator+(Matrix c)
{
	Matrix temp(2,2);
	for(int i=0;i<c.r;i++){
		for(int j=0;j<c.c;j++){
			temp.a[i][j]=a[i][j]+c.a[i][j];	
		}	
	}
	return (temp);
}
Matrix Matrix::operator-(Matrix c)
{
	Matrix temp(2,2);
	for(int i=0;i<c.r;i++){
		for(int j=0;j<c.c;j++){
			temp.a[i][j]=a[i][j]-c.a[i][j];	
		}	
	}
	return (temp);
}
Matrix Matrix::operator*(Matrix c)
{
	Matrix temp(2,2);
	/*if(r!=c.r)printf("Incompatible matrices!!");
	else{*/
	for(int i=0;i<r;i++){
		for(int j=0;j<c.c;j++){
			for(int k=0;k<c.r;k++){
				temp.a[i][j]=a[i][k]*c.a[k][j];
			}
		}	
	}
	return (temp);
}
void Matrix::input(void)
{
	printf("Enter data for matrix(%d x %d):",r,c);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void Matrix::display(void)
{
	printf("The data for matrix \n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	Matrix m1,m2,m3;
	m1=Matrix(2,2);
	m1.input();
	m2=Matrix(2,2);
	m2.input();
	m3=m1+m2;
	printf("Matrix 1=");
	m1.display();
	printf("Matrix 2=");
	m2.display();
	cout<<"Sum is:"<<endl;
	printf("Matrix 3=");
	m3.display();
	m3=m1-m2;
	cout<<"DIfference is:"<<endl;
	printf("Matrix 3=");
	m3.display();
	m3=m1*m2;
	cout<<"Product is:"<<endl;
	printf("Matrix 3=");
	m3.display();
	return 0;
}
