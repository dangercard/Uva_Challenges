#include <iostream>
#include <algorithm>
using namespace std ;

bool comp(char a, char b)
{
  return toupper(a) < toupper(b) or (toupper(a) == toupper(b) and a < b) ;
}

int main() {
  string st ;
  int n ;

  cin >> n ;

  for(int i = 0 ; i < n ; i++)
  {
    cin >> st ;

    sort(st.begin(), st.end(), comp) ;
    string original = st ;

    do {
      cout << st << endl ;
      next_permutation(st.begin(), st.end(), comp) ;
    } while(st != original);
  }

  return 0;
}
