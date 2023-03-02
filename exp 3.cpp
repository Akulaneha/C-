#include<iostream>
using namespace std;
class sam
{
	public:
	int a=5;
	int b=4;
	void display()
	{
		cout<<a<<b;
	}
};
int main()
{
	sam d;
	sam *a;
	a=&d;
	d.display();
	cout<<d.a<<d.b;
}
