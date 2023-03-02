#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x=8;
	cout<<setw(8)<<endl<<x<<endl;
	cout<<setw(8)<<setfill('*')<<x<<endl;
	return 0;
}

