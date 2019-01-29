//Uri 1008 - Salary
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
	int a,b;
	
	double c,x;
	
	cin>>a>>b>>c;
	
	x=(b*c);
	
	cout<<fixed<<"NUMBER = "<<a<<endl;
	
	cout<<fixed<<"SALARY = U$ "<<setprecision(2)<<x<<endl;
	
	return 0;
}
