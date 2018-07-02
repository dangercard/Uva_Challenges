#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std ;

int main()
{
  int n ;
  cin >> n ;
  while(n > 0)
  {
    vector <int> Blue ;
    vector <int> Red ;

    int floors,F ;
    int accum = 0 ;
    int last ;
    string start ;

    cin >> floors ;

    if(floors == 0)
    {
      n-- ;
      cout << accum << endl ;
      continue ;
    }
    // cout << floors ;
    for(int i = 0; i < floors; i++)
    {
      cin >> F ;
      // cout << F ;
      if(F > 0)
      {
        Blue.push_back(F) ;
      }

      else
      {
        Red.push_back(abs(F)) ;
      }
    }

    if(!Blue.empty())
    {
      sort(Blue.begin(),Blue.end()) ;
    }

    if(!Red.empty())
    {

      sort(Red.begin(),Red.end()) ;
    }

    if(!Blue.empty() and !Red.empty() and Blue.back() > Red.back())
    {
      accum++ ;
      last = Blue.back() ;
      Blue.pop_back() ;
      start = "Blue" ;
    }

    else if(!Blue.empty() and !Red.empty() and Blue.back() < Red.back())
    {
      accum++ ;
      last = Red.back() ;
      Red.pop_back() ;
      start = "Red" ;
    }

    else
    {
      accum++ ;
      cout << accum << endl ;
      n-- ;
      continue ;
    }

    while(true)
    {
      if(start == "Red" and Blue.empty())
      {
        break ;
      }

      if(start == "Blue" and Red.empty())
      {
        break ;
      }

      if(start == "Blue")
      {
        if(Red.back() < last)
        {
          last = Red.back() ;
          Red.pop_back() ;
          accum++ ;
          start = "Red" ;
        }

        else
        {
          Red.pop_back() ;
        }
      }

      else
      {
        if(Blue.back() < last)
        {
          last = Blue.back() ;
          Blue.pop_back() ;
          accum++ ;
          start = "Blue" ;
        }

        else
        {
          Blue.pop_back() ;
        }
      }
    }

    cout << accum << endl ;
    n-- ;
  }

  return 0 ;
}
