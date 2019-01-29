
//Uri 1013 - The Greatest

#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
	int a,b,c,x,y;
	
	cin>>a>>b>>c;
	
	x=(a+b+abs(a-b))/2;
	
	y=(x+c+abs(x-c))/2;
	
	cout<<fixed<<y<<" eh o maior"<<endl;
	
	return 0;
}
