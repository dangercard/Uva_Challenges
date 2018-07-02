#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std ;

int main()
{
  int n ;
  while(cin >> n)
  {
    // cout << n << endl ;
    int f = 0 ;
    int s = 0 ;

    vector<int> V(n-1,0) ;
    vector<int> Sol(n-1,1) ;


    for(int i = 0; i < n; i++)
    {
      // cout << "ea" << endl ;
      if(n > 1 and i == 0 )
      {
        cin >> f >> s ;
        // cout << f << "-" << s << endl ;
        i++ ;
      }

      else
      {
        cin >> s ;
        // cout << f << "-" << s << endl ;
      }

      if(n == 1)
      {
        cout << "Jolly" << endl ;
        cin.ignore(n*5, '\n');
        break ;
      }

      if(abs(f-s) > 0 and abs(f-s) < n)
      {
        V[abs(f-s)-1] = 1 ;
        f = s ;

        if(V == Sol)
        {
          cout << "Jolly" << endl ;
        }

      }

      else
      {
        cin.ignore(n*5, '\n');
        break ;
      }

    }

    if(n > 1 and V != Sol)
    {
      cout << "Not jolly" << endl ;
    }
    // for(int i = 0; i < V.size(); i++)
    // {
    //   cout << V[i] ;
    // }
    // cout << endl ;

  }

  return 0 ;
}
