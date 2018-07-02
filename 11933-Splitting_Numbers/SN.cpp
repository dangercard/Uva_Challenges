#include <iostream>
using namespace std ;

int main()
{
  unsigned int n ;

  while(cin >> n)
  {
    if(n == 0)
    {
      break ;
    }
    
    unsigned int a = 0, b = 0 ;

    bool A = true ;

    unsigned int index = 1 ;
    while(n)
    {
      if(n & 1)
      {
        if(A)
        {
          a += index ;
          A = !A ;

        }

        else
        {
          b += index ;
          A = !A ;
        }
      }

      index = index << 1 ;
      n = n >> 1 ;
    }

    cout << a << " " << b << endl ;
  }

  return 0 ;
}
