#include <iostream>
#include <stack>
#include <string>
using namespace std ;

int main()
{
  string stI, stO ;
  int j = 0 ;

  cin >> stI ;
  cin >> stO ;

  stack <char> S ;
  // S.push(stI[0]) ;

  for(int i = 0; i < stI.length() ; i++)
  {
    if(stO[j] == S.top())
    {
      S.pop() ;
      j++ ;
    }

    else
    {
      S.push(stI[i]) ;
    }
  }

  if(S.empty())
  {
    cout << "True" << endl ;
  }

  else
  {
    cout << "False" << endl ;
  }

  return 0 ;
}
