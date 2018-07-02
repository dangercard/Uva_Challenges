#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std ;
// Hacer 11172.
int main()
{
  int h, m ;

  while(scanf("%d:%d", &h, &m) and (h != 0 or m != 0))
  {
    #ifdef DEBUG
    cout << h << "---"<< m << endl ;
    #endif

    float a = h*30 + ((float)m/(float)2) - m*6 ;

    if(a < 0)
    {
      a = -a ;
    }

    if(a > 360)
    {
       a -= 360 ;
    }

    if(a > 180)
    {
       a = 360 - a;
    }

    cout << fixed << setprecision(3) <<  a << endl ;

  }
}
