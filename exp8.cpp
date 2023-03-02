#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr = new int;
	cout<<"number of bytes allocated to ptr is "<<sizeof(ptr)<<endl;
	cout<<"value at ptr is "<<*ptr<<endl;
	return 0;
}
