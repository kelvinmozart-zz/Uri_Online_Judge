
//Uri 1019 - Conversao de Tempo

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	int hora,minuto,segundo,tempo;
	
	cin>>tempo;
	
	minuto=tempo/60;
	
	segundo=tempo%60;
	
	hora=minuto/60;
	
	minuto=minuto%60;
	
	cout<<hora<<":"<<minuto<<":"<<segundo<<endl;
	
	return 0;
}
