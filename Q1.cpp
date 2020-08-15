#include<iostream>
using namespace std;
float find_area(float radius);
float find_perimeter(float radius);
int	main(){
	
	float area,perimeter,radius;
	cout<<"Enter the radius of the circle: ";
	cin>>radius;
	
	area = find_area(radius);
	perimeter = find_perimeter(radius);
	
	cout<<"The area of the circle is : "<<area<<endl;
	cout<<"The perimeter of the circle is : "<<perimeter<<endl;	
	
	return 0;
	
}

float find_area(float radius){
	return (3.14*radius*radius);
}

float find_perimeter(float radius){
	return (3.14*2*radius);
}

