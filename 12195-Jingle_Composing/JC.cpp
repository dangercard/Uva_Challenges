#include <iostream>
using namespace std ;

int main()
{
  float W = 1.0 ;
  float H = 1.0/2.0 ;
  float Q = 1.0/4.0 ;
  float E = 1.0/8.0 ;
  float S = 1.0/16.0 ;
  float T = 1.0/32.0 ;
  float X = 1.0/64.0 ;
  int count ;
  float isOne ;
  string st ;

  while (cin >> st)
  {
    // cout << st << '\n';
    if(st == "*")
    {
      break ;
    }

    count = 0 ;


    for(int i = 1 ; i < st.length() ; i++)
    {
      if(st[i] == '/')
      {
        if(isOne == 1.0)
        {
          count++ ;

        }
        isOne = 0.0 ;
      }

      if(st[i] == 'W')
      {
        isOne += W ;
      }

      else if(st[i] == 'H')
      {
        isOne += H ;
      }

      else if(st[i] == 'Q')
      {
        isOne += Q ;
      }

      else if(st[i] == 'E')
      {
        isOne += E ;
      }

      else if(st[i] == 'S')
      {
        isOne += S ;
      }

      else if(st[i] == 'T')
      {
        isOne += T ;
      }

      else if(st[i] == 'X')
      {
        isOne += X ;
      }


    }
    cout << count << endl ;
  }



  return 0 ;
}
