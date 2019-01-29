//Uri 1010 - Simple Calculate
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
	int a,b,d,e;
	
	double c,f,x;
	
	cin>>a>>b>>c;
	
	cin>>d>>e>>f;
	
	x=(b*c)+(e*f);
	
	cout<<fixed<<"VALOR A PAGAR: R$ "<<setprecision(2)<<x<<endl;
	
	return 0;
}
