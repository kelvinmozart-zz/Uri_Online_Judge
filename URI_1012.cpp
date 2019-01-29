
//Uri 1012 - Area

#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
	float a,b,c;
	
	double t,circ,t2,q,r;
	
	cin>>a>>b>>c;
	
	t=(a*c)/2;
	circ=3.14159*c*c;
	t2=(c*(a+b))/2;
	q=b*b;
	r=a*b;
	
	cout<<fixed<<"TRIANGULO: "<<setprecision(3)<<t<<endl;
	cout<<fixed<<"CIRCULO: "<<setprecision(3)<<circ<<endl;
	cout<<fixed<<"TRAPEZIO: "<<setprecision(3)<<t2<<endl;
	cout<<fixed<<"QUADRADO: "<<setprecision(3)<<q<<endl;
	cout<<fixed<<"RETANGULO: "<<setprecision(3)<<r<<endl;
	
	return 0;
}
