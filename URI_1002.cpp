//Uri 1002 - Area of a Circle
#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
	double R,X;
	
	cin>>R;
	
	X = 3.14159 * R*R;
	
	cout<<fixed<<"A="<<setprecision(4)<<X<<endl;
	
	
	return 0;
}
