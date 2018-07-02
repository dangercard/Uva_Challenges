#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
using namespace std ;

int main()
{
  int n ;
  cin >> n ;
  while(n)
  {
    string st ;
    cin >> ws ;
    getline(cin,st) ;
    int stSize = st.length() ;

    vector <int> Pos ;


    for(int i = 0 ; i < st.length() ; i+=2)
    {
      Pos.push_back((int)st[i] -48) ;
    }

    vector <string> Arr(Pos.size()) ;

    for(int i = 0 ; i < Arr.size() ; i++)
    {
      cin >> Arr[Pos[i]-1] ;
    }


    for(int i = 0 ; i < Arr.size() ; i++)
    {
      cout << Arr[i] << endl ;
    }

    n-- ;

    cout << endl ;

  }
}
