#include <iostream>
#include <map>
#include <vector>
using namespace std ;

int main()
{
  int n ;
  map<int,int> M ;
  vector<int> V ;
  while(cin >> n)
  {
    if(M.find(n) != M.end())
    {
      M[n] += 1 ;
    }

    else
    {
      M[n] = 1 ;
      V.push_back(n) ;
    }
  }

  for (int i = 0 ; i < V.size() ; i++)
  {
      cout << V[i] << " " << M[V[i]] <<  endl ;
  }

}
