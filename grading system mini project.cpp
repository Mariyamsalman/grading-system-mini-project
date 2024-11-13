#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	//program to calculate grading system
	string name;
    char grade;
	float marks1,marks2,marks3,marks4,marks5,avg;
	cout<<"enter your name:";
	cin>>name;
	cout<<"\n\tGood luck for your grades";
	//taking marks as input from student to calculate the average
	cout<<"\n\nenter your marks in maths:";
	cin>>marks1;
	cout<<"\nenter your marks in english:";
	cin>>marks2;
	cout<<"\nenter your marks in urdu:";
	cin>>marks3;
    cout<<"\nenter your marks in islamiat:";
	cin>>marks4;
	cout<<"\nenter your marks in computer:";
	cin>>marks5;
	avg=(marks1+marks2+marks3+marks4+marks5)/5;
	cout<<"\nThe average of your marks is:"<<avg;
	if(avg>=80)
	{
		cout<<"\nyour grade is:A";
		cout<<"\nsuperb!";
	}else if(avg>=70){
	cout<<"\nyour grade is:B";
	cout<<"\nwelldone!";
}else if(avg>=60){
	cout<<"your grade is:C";
	cout<<"\nsatisfactory!";
}else if(avg>=50){
	cout<<"\nyour grade is:D";
	cout<<"\nnice try!";
}else if(avg>=40){
	cout<<"\nyour grade is:E";
	cout<<"\nwork hard!";
}else{
	cout<<"\nyou are fail";
	cout<<"\nbetter luck next time!";
}
	return 0;
	}
