/*Create a student class and create 10 objects and display the roll no. of the students. Use static data member and array to create objects. Do not use constructors.
 */
#include<iostream>
#include<cstdio>
using namespace std;
class Student
{
	int roll;
	public:	
		static int count;
		Student(){}
		void init()
		{
			roll=++count;
			//this->roll=roll;
		}
		void display()
		{
			printf("%d ",roll);
		}
};
int Student::count;
int main()
{
	Student arr[10];
	for(int i=0;i<10;i++){
		int x=Student::count;
		arr[i].init();
	}
	printf("The rolls are: \n");
	for(int i=0;i<10;i++){
		printf("Student %d: ",i);
		arr[i].display();
		printf("\n");
	}
	return 0;
}
