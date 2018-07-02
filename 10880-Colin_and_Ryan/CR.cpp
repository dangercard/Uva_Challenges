#include <iostream>
#include <set>
#include <cmath>
using namespace std ;

int main()
{
  int count = 1 ;
  int n ;

  cin >> n ;
  while(n)
  {
    set <int> S ;
    double C, R ;
    cin >> C >> R ;
    int dif = C - R ;
    for(int i = 1 ; i <= min(sqrt(dif),dif/R); i++)// R = 0?
    {
      if(dif%i == 0)
      {
        if(i > R)
        {
          S.insert(i) ;
        }

        if(i != dif/i and dif/i > R)
        {
          S.insert(dif/i) ;
        }
      }
    }

    if(C == R)
    {
      S.insert(0) ;
    }

    cout << "Case #" << count << ":"  ;

    for(auto it = S.begin(); it != S.end(); it++)
    {
      cout << " " << *it ;
    }
    cout << endl ;
    count++ ;
    n-- ;
  }
}
