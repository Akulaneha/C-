#include <iostream>
using namespace std;
struct college_info {
	char college_name[15];
	char college_code[2];
	char dept[50];
	int intake;
};
int main()
{
	struct college_info college;
	cout<<"college information:";
	cout<<"name of the college:";
	cin>>college.college_name;
	cout<<"college_code:";
	cin>>college.college_code;
	cout<<"department:";
	cin>>college.dept;
	cout<<"department intake:";
	cin>>college.intake;
	cout<<"college information:";
	cout<<"name of the college:"<<college.college_name;
	cout<<"college university code:"<<college.college_code;
	cout<<"name of the department:"<<college.dept;
	cout<<"the department:"<<college.dept;
	cout<<"the department of "<<college.dept<<"has intake"<<college.intake;
	cout<<"\n\n\n";
	return 0;
}
