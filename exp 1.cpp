#include<iostream>
using namespace std;
class student_details
{
	char name[100];
	int roll_no;
	char grade[50];
	public:
	void read(int count)
	{
		cout<<"enter student information "<<endl;
		cout<<"name of student:";
		cin>>name;
		cout<<"rollno:";
		cin>>roll_no;
		cout<<"grade(o,A+,A,B+,B,C,D,E,F):";
		cin>>grade;
		cout<<"student information with roll number"<<roll_no<<"saved"<<endl;
	}
	void result(int count)
	{
		cout<<"student"<<count<<"information"<<endl;
		cout<<"name of the student :"<<name<<endl;
		cout<<"roll no:"<<roll_no<<endl;
		cout<<"grade secure:"<<grade<<endl;
	}
};
int main()
{
	student_details s[3];
	for(int i=0;i<3;i++)
		s[i].read(i+1);
	for(int i=0;i<3;i++)
		s[i].result(i+1);
}

