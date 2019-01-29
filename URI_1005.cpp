//Uri 1005 - Average 1
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	float A,B,MEDIA;
	
	cin>>A>>B;
	
	MEDIA = (A*3.5 + B*7.5)/11;
	
	cout<<fixed<<setprecision(5)<<"MEDIA = "<<MEDIA<<endl;
	
	return 0;
}
