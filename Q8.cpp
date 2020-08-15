#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	float sum=0,i;
	cout<<"enter the value of n\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/i);
	}
	cout <<"the sum of the series is:\n"<<sum;
	return sum;
}
