#include <iostream>
#include <math.h>
using namespace std;
void Find_roots(int a,int b, int c);
int main(){
	int a,b,c;
	cout<<"Enter the value of a , b and c: "<<endl;
	cin>>a>>b>>c;
	
	Find_roots(a,b,c);
	
	return 0;
}
void Find_roots(int a,int b, int c){
	float D = (b*b)-(4*a*c);

	float div=(2*a);
	
	if(D<0){
		D=D*(-1);
		D=sqrt(D);
		cout<<"Imaginary Roots are:"<<endl;
		cout<<"Root 1: "<<(-b/div)<<" + "<<D/div<<" i"<<endl;
		cout<<"Root 1: "<<(-b/div)<<" - "<<D/div<<" i"<<endl;
		cout<<"No Real Roots present"<<endl;
	}
	
	else if(D>0){
		D=sqrt(D);
		cout<<"Real Roots are:"<<endl;
		cout<<"Root 1: "<<(-b+D)/div<<endl;
		cout<<"Root 2: "<<(-b-D)/div<<endl;
		cout<<"No Imaginary Roots present"<<endl;
	}
	
	else{
		D=sqrt(D);
		cout<<"Real and equal Roots :"<<endl;
		cout<<"Root: "<<(-b+D)/div<<endl;
		cout<<"No Imaginary Roots present"<<endl;
	}
	
	
}
