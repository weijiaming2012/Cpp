#include<iostream>
using namespace std;

int main()
{
	char grade;
	cout<<"Enter your midterm grade and press return:";
	cin>>grade;

	switch(grade)
	{
		case 'A':
			cout<<"Excellent"
				<<"You need not take the final.\n";
			break;
		case 'B':
			cout<<"Very good.";
			grade='A';
			cout<<"Your midterm grade is now"
				<<grade<<endl;
			break;
		case 'C':
			cout<<"Passing.\n";
			break;
		case 'F':
			cout<<"Not good."
				<<"Gp Study.\n";
			break;
		default:
			cout<<"That is not a possiable grade.\n";
	}

	cout<<"End of programe.\n";

	return 0;
}
