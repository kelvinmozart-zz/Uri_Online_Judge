//Uri 1009 - Salary with Bonus
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
	string x;
	
	double a,b,y;
	
	cin>>x>>a>>b;
	
	y=a+b*0.15;
	
	cout<<fixed<<"TOTAL = R$ "<<setprecision(2)<<y<<endl;
	
	return 0;
}
