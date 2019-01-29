
//Uri 1015 - Distance Between Two Points

#include <iomanip>
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	float x1,y1,x2,y2,k;
	
	cin>>x1>>y1;
	cin>>x2>>y2;
	
	k=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
	cout<<fixed<<setprecision(4)<<k<<endl;
	
	return (0);
}
