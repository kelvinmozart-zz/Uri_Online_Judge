
//Uri 1011 - Sphere

#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
	int R;
	
	double y;
	
	cin>>R;
	
	y=(4.0/3)*3.14159*R*R*R;
	
	cout<<fixed<<"VOLUME = "<<setprecision(3)<<y<<endl;
	
	return 0;
}
