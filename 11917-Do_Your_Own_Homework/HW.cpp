#include <iostream>
#include <map>
using namespace std ;

int main()
{
  int t ;
  cin >> t ;
  int c = 1 ;
  while(t)
  {
    // if(t == 0)
    // {
    //   break ;
    // }

    map<string,int> M ;
    int n, days ;
    string sub ;
    cin >> n ;
    while(n)
    {
      // cout << n ;
      cin >> sub >> days ;
      M[sub] = days ;
      n-- ;
    }

    int D ;
    string S ;

    cin >> D ;
    cin >> S ;

    // cout << D <<  " " << S << endl ;

    if(M.find(S) == M.end() || M[S] > D+5 )
    {
      cout << "Case " << c << ": Do your own homework!" << endl ;
    }

    else if(M[S] <= D)
    {

      cout << "Case " << c << ": Yesss" << endl ;
    }

    else if(M[S] <= D+5)
    {
      cout << "Case " << c << ": Late" << endl ;
    }

    c++ ;

    t-- ;
  }
}
