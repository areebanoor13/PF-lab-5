#include<iostream>
using namespace std;
int main()
{int n;
	int firstnum = 1;
	int sum=0;
	cout<<"Enter a number";
	cin>>n;
	while(firstnum<=n)
	{if(firstnum%2!=0)
		{sum+=firstnum;}
		 firstnum++;}
		cout << "The sum of odd numbers between 1 and " << n << " is: " << sum << endl;
return 0;}
