#include <iostream>
#include <vector>
#include <cmath>
using namespace std ;


int main()
{
  int n ;
  vector<int> V ;
  while(cin >> n)
  {
    // cout << n << endl;
    V.push_back(n);
  }

  int size = V.size() ;

  vector <int> pos(size,1) ;

  for(int i = 1; i < size; i++)
  {
    for(int j = 0; j < i; j++)
    {
      if(V[i] > V[j])
      {
        if(pos[i] <= pos[j])
        {
          pos[i] = pos[j] + 1 ;
        }
      }
    }
  }

  // for(int k = 0; k < size; k++)
  // {
  //   cout << pos[k] << endl ;
  // }
  int max = 1;
  vector <int> Res(max) ;
  for(int k = 0; k < size; k++)
  {
    if(max < pos[k])
    {
      max = pos[k] ;
    }
  }
  cout << max << endl << "-" << endl ;

  for(int n = size-1; n >= 0; n--)
  {
    if(pos[n] == max)
    {
      Res.push_back(V[n]) ;
      max--;
    }
  }

  for(int k = Res.size()-1; k > 0; k--)
  {
    cout << Res[k] << endl ;
  }


}
