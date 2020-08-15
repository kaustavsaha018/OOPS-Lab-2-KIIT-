#include<iostream>
using namespace std;
float find_centigrade(float fahrenheit);

int	main(){
	
	float fahrenheit,centigrade;
	cout<<"Enter temperature in fahrenheit: ";
	cin>>fahrenheit;
	
	centigrade = find_centigrade(fahrenheit);

	
	cout<<"The temperature in centigrade is : "<<centigrade<<endl;

	
	return 0;
	
}
float find_centigrade(float fahrenheit){
	return ((fahrenheit - 32) * 5 / 9);
}

