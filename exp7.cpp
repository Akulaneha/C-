#include<iostream>
using namespace std;
int my_variable = 18;
int main()
{
	int my_variable = 200;
	cout<<"value of global my_variable = "<<::my_variable;
	cout<<"value of local my_variable = "<<my_variable;
	return 0;
}
