#include<iostream>
using namespace std;
int main() {              
                int sum=0;
		int num;
		while(true)
		{cout<<"Enter a number:";
		cin>>num;
		if(num<0)
		{break;}
		sum += num;}
cout << "The total sum of non-negative numbers is: " << sum << endl;
return 0;}
