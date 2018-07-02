#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <vector>
using namespace std ;


int main()
{
  int n,k ;
  while(cin >> n)
  {
    // cout << n ;
    vector<int> VI(n) ;

    for(int i = 1; i < n; i++)
    {
      VI[i] = i ;
      // cout << VI[i] ;
    }
    // cout << endl ;


    while(cin >> k)
    {
      // cout << k << endl;
      if(k == 0)
      {
        break ;
      }

      vector<int> VO(n) ;
      // cout << "made" << endl ;
      VO[0] = k ;
      // cout << VO[0] ;
      for(int i = 1 ; i < n ; i++)
      {
        cin >> VO[i] ;
        // cout << VO[i] ;
      }
      // cout << endl ;

      int nextT = 1, j = 0;
      stack<int> S ;

      while(nextT <= n)
      {
        S.push(nextT) ;
        while(!S.empty() and S.top() == VO[j])
        {
          S.pop() ;
          j++ ;
          if(j >= n)
          {
            break ;
          }
        }
        nextT++ ;
      }

      if(S.empty())
      {
        cout << "Yes" << endl ;
      }

      else
      {
        cout << "No" << endl;
      }
    }
    if(n != 0)
    {
      cout << endl ;
    }
  }


  return 0 ;
}
