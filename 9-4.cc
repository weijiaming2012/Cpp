#include<iostream>
using namespace std;

typedef int* IntPtr;

int main()
{
	IntPtr p;
	int a[10];
	int index;

	for(index=0;index<10;index++)
	{
		a[index]=index;
	}

	p=a;

	for(index=0;index<10;index++)
	{
		cout<<p[index]<<"   ";
	}
	cout<<endl;

	for(index=0;index<10;index++)
	{
		p[index]=p[index]+1;
	}

	for(auto x:a)
	{
		cout<<x<<"   ";
	}
	cout<<endl;

	return 0;
}
