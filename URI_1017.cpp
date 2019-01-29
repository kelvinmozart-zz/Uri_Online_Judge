
//Uri 1017 - Fuel Spent

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x,y;
	float z;
	
	cin>>x;
	cin>>y;
	
	z=(y/12.0)*x;
	
	cout<<fixed<<setprecision(3)<<z<<endl;

	return 0;
}
