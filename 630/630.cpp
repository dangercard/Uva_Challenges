#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;


int main()
{

  int t, v ;
  cin >> t ;

  for(int i = 0; i < t; i++)
  {
    cin >> v ;
    string Voc[v] ;

    for(int j = 0; j < v; j++)
    {
      cin >> Voc[j] ;
    }

    vector <string> V(Voc,Voc + v) ;
    // sort(V.begin(), V.end()) ;
    string w ;

    while (cin >> w )
    {
      if(w == "END")
      {
        break ;
      }

      int n = 0 ;

      cout << "Anagrams for: " << w << endl ;

      for(int k = 0 ; k  < v; k++)
      {
        if(is_permutation(V[k].begin(),V[k].end(),w.begin()))
        {
          cout << "  " << n+1 << ") " << V[k] << endl ;
          n++ ;
        }
      }

      if(n == 0)
      {
        cout << "No anagrams for: " << w << endl ;
      }
    }

    if(i != t-1)
    {
      cout << endl ;
    }

  }

  return 0 ;
}
