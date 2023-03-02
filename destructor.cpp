#define SIZE 100
#include<iostream>
using namespace std;
class stack
{
	int stck[SIZE];
	int tos;
	public:
	stack();
	~stack();
	void push(int i);
	int pop();
};
stack::stack()
{
	tos=0;
	cout<<"stack initialised\n";
}
stack::~stack()
{
	cout<<"stack destroyd\n";
}
void stack::push(int i)
{
	if(tos==SIZE)
	{
		cout<<"stack is full\n";
		return;
	}
	stck[tos]=i;
	tos++;
}
int stack::pop()
{
	if(tos==0)
	{
		cout<<"stack overflow\n";
		return 0;
	}
	tos--;
	return stck[tos];
}
int main()
{
	stack a,b;
	a.push(1);
	b.push(2);
	a.push(3);
	b.push(4);
	cout<<a.pop()<<" ";
	cout<<a.pop()<<" ";
	cout<<b.pop()<<" ";
	cout<<b.pop()<<" ";
	return 0;
}

