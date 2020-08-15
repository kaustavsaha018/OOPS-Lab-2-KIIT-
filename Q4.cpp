#include<iostream>
using namespace std;
float Find_sum(int n);
int main(){
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
		
	float sum = Find_sum(n);
	cout<<"The sum of the series is: "<<sum<<endl;
	
	return 0;
}

float Find_sum(int n){
	float i;
	float sum=0;
	for(i=1;i<=n;i++){
		
		sum=sum+(1/i);
	}
	
	return sum;
}


