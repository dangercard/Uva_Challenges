#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std ;


int main()
{
  int n ;
  while (cin >> n)
  {
    int b ;
    int A[n] ;

    for(int i = 0; i < n ; i++)
    {
      cin >> b ;
      A[i] = b;

    }
    vector<int> v(A, A + n);

    // for(int i = 0; i < n ; i++)
    // {
    //   cout << v[i] ;
    // }
    // cout << endl ;
    // sort(v.begin(),v.end()) ;
    //
    // for(int i = 0; i < n ; i++)
    // {
    //   cout << v[i] ;
    // }
    // cout << endl ;

    int front = 0 ;
    int back = n-1 ;
    int accum = 0 ;

    while(front < back)
    {
      if(abs(v[front] - v[back]) <= abs(v[front] - v[front+1]))
      {
        accum += abs(v[front] - v[back])  ;
        // cout << abs(v[front] - v[back]) << endl ;
        front++ ;
        back-- ;
      }

      else
      {
        accum +=  abs(v[front] - v[front+1]) ;
        front += 2 ;
      }
    }
    if(accum > 12)
    {
      cout << abs(accum-24) << endl ;
    }
    else
    {
      cout << accum << endl ;

    }
  }

  return 0 ;
}
