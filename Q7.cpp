#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float a,b,c,p,q;
	float d,t;
	cout<<"enter the value of a ,b and c\n";
	cin>>a>>b>>c;
	d=(b*b)-4*a*c;
	p=2*a;
	t=sqrt(d);
	if(d<0){
		d=d*(-1);
		t=sqrt(d);
		cout<<"Imaginary Roots are:"<<endl;
		cout<<"Root 1: "<<(-b/p)<<" + "<<t/p<<" i"<<endl;
		cout<<"Root 1: "<<(-b/p)<<" - "<<t/p<<" i"<<endl;
		cout<<"No Real Roots present"<<endl;
	}
	else if(d==0){
		q=b/p;
		q=(-1*q);
		cout<<"the roots are:"<<q;
	}
	
	else{
		t=sqrt(d);
		cout<<"Real Roots are:"<<endl;
		cout<<"Root 1: "<<(-b+t)/p<<endl;
		cout<<"Root 2: "<<(-b-t)/p<<endl;
		cout<<"No Imaginary Roots present"<<endl;
	}
}
