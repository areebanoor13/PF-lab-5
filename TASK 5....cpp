#include<iostream>
using namespace std;
int main()
{double temperature;
  double sum=0;
  double average;
	 for(int i=1;i<7;i++)
	 {cout<<"Enter temperature for day:"<<i<<endl;
	cin>>temperature;
	 sum += temperature; }
         average=sum/7;
	 cout<<"The average temperature at the end of the week."<<average;
    return 0;}
