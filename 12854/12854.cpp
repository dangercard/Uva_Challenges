/*
  Alejandro Deloach
  801-13-1900
*/

#include <iostream>
using namespace std ;

int main()
{
  int a1, a2, b1, b2, c1, c2, d1, d2, e1, e2 ;
  while(cin >> a1 >> b1 >> c1 >> d1 >> e1)
  {
    cin >> a2 >> b2 >> c2 >> d2 >> e2 ;

    a1 += a2 ;
    b1 += b2 ;
    c1 += c2 ;
    d1 += d2 ;
    e1 += e2 ;

    if(a1 == 1 and b1 == 1 and c1 == 1 and d1 == 1 and e1 == 1)
    {
      cout << 'Y' << endl ;
    }

    else
    {
      cout << 'N' << endl ;
    }

  }

  return 0 ;
}
