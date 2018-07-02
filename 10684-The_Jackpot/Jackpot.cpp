#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
  int n ;

  while(true)
  {
    cin >> n ;

    if(n == 0)
    {
      break ;
    }

    int num ;
    vector <int> V;

    for(int i = 0; i < n; i++)
    {
      cin >> num ;
      V.push_back(num) ;
    }

    vector <int> Max ;
    // cout << V[0] << endl ;
    Max.push_back(V[0]) ;
    int val;

    for(int i = 1; i < n; i++)
    {
      val = max(V[i],V[i] + Max[i-1]);
      // cout << val << endl ;
      Max.push_back(val) ;
    }

    int Pot = 0 ;

    for(int j = 0; j < n; j++)
    {
      if(Pot < Max[j])
      {
        Pot = Max[j] ;
      }
    }

    if(Pot == 0)
    {
      cout << "Losing streak." << endl ;
    }

    else
    {
      cout << "The maximum winning streak is " << Pot << "." << endl ;
    }


  }

}
