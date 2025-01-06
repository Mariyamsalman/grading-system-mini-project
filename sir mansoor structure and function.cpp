#include<iostream>
#include<string.h>
using namespace std;

struct student{
	char name[20];
	int roll_no;
	int marks1,marks2,marks3;
};
void addStudent(struct student);
void display(struct student);
void calculateTotalMarks(struct student);
int main()
{
	student s;
	addStudent(s);

	
	return 0;
}
void addStudent(struct student receive){
	cout<<"enter your name:";
	gets(receive.name);
	cout<<"\n enter your roll no:";
	cin>>receive.roll_no;
	cout<<"\n enter marks of 3 subjects:";
	cin>>receive.marks1>>receive.marks2>>receive.marks3;
		display(receive);
}
 void display(struct student dataDisplay){
 	cout<<dataDisplay.name<<endl;
 	cout<<dataDisplay.roll_no<<endl;
 	cout<<dataDisplay.marks1<<dataDisplay.marks2<<dataDisplay.marks3<<endl;
     calculateTotalMarks(dataDisplay);
 }
 void calculateTotalMarks(struct student allMarks){
 	int sum;
 	sum=allMarks.marks1+allMarks.marks2+allMarks.marks3;
 	cout<<sum;
 }
