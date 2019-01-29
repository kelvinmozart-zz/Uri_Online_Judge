//Uri 1006 - Average 2
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{

	double a,b,c,x;
	
	cin>>a>>b>>c;
	
	x=(a*2.0+b*3.0+c*5.0)/10.0;
	
	cout<<fixed<<"MEDIA = "<<setprecision(1)<<x<<endl;
	
	return 0;
}
