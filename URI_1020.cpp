
//Uri 1020 - idade em Dias

#include <iostream>
#include <cstdlib>
#include <iomanip>
  
using namespace std;
  
int main()
{
    int x,y,d,m,ry,rm;
    cin>>x;
      
    y=(x/365); cout<<y<<" ano(s)"<<endl;
      
    ry=(x%365); m=(ry/30); cout<<m<<" mes(es)"<<endl;
      
    d=(ry%30); cout<<d<<" dia(s)"<<endl;
      
    return 0;
}
