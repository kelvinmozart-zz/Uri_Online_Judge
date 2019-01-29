
//Uri 1014 - Consumption

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int A;
	float B,x;
	
	cin>>A;
	cin>>B;
	
	x=A/B;
	
	cout<<fixed<<setprecision(3)<<x<<" km/l"<<endl;
	
	return 0;
}
