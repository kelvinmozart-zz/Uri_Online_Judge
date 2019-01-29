
//Uri 1018 - Cedulas

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	int x,a,b,c,d,e,f,g,r1,r2,r3,r4,r5;
	
	cin>>x;
	cout<<x<<endl;
	a=(x/100); cout<<a<<" nota(s) de R$ 100,00"<<endl;
	r1=x%100; b=(r1/50); cout<<b<<" nota(s) de R$ 50,00"<<endl;
	r2=(r1%50); c=(r2/20); cout<<c<<" nota(s) de R$ 20,00"<<endl;
	r3=r2%20; d=(r3/10); cout<<d<<" nota(s) de R$ 10,00"<<endl;
	r4=r3%10; e=(r4/5); cout<<e<<" nota(s) de R$ 5,00"<<endl;
	r5=r4%5; f=(r5/2); cout<<f<<" nota(s) de R$ 2,00"<<endl;
	g=r5%2; cout<<g<<" nota(s) de R$ 1,00"<<endl; 
	
	return 0;
}
