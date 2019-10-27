#include<iostream>

// par1Value是传值参数，par2Ref是传引用参数
void doStuff(int par1Value,int& par2Ref);

int main()
{
	using namespace std;
	int n1,n2;

	n1=1;
	n2=2;
	doStuff(n1,n2);
	cout<<"n1 after function call="<<n1<<endl;
	cout<<"n2 after function call="<<n2<<endl;

	return 0;
}

void doStuff(int par1Value,int& par2Ref)
{
	using namespace std;
	par1Value=111;
	cout<<"par1Value in function call="
		<<par1Value<<endl;
	par2Ref=222;
	cout<<"par2Ref in function call="
		<<par2Ref<<endl;
}
