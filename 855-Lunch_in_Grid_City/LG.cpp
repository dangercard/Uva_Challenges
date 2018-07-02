#include <iostream>
using namespace std ;

int main()
{
  int n ;
  cin >> n ;

  while(n)
  {
    int h, w, f ;

    cin >> h >> w >> f ;
    int max_a = 0 ;
    int min_a = h ;
    int max_b = 0 ;
    int min_b = w ;
    while(f)
    {
      int a,b ;
      cin >> a >> b ;

      if(a > max_a)
      {
        max_a = a ;
      }
      if(a < min_a)
      {
        min_a = a ;
      }
      if(b > max_b)
      {
        max_b = b ;
      }
      if(b < min_b)
      {
        min_b = b ;
      }

      f-- ;
    }
    // cout << max_a << endl ;
    // cout << min_a << endl ;
    // cout << max_b << endl ;
    // cout << min_b << endl ;

    int street = (max_a + min_a)/2 ;
    int avenue = (max_b + min_b)/2 ;

    cout << "(Street: " << street << ", Avenue: " << avenue << ")" << endl ;
    n-- ;
  }
}
