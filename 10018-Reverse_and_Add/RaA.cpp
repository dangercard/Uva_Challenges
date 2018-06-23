#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std ;

int main()
{
  int n ;
  cin >> n ;

  for(int i = 0 ; i < n ; i++)
  {
    long num, rev ;
    int count = 0 ;
    string st_num,tmp ;
    cin >> num ;
    do {
      st_num = to_string(num) ;
      reverse(st_num.begin(), st_num.end()) ;
      num += stol(st_num) ;
      tmp = to_string(num) ;
      reverse(tmp.begin(),tmp.end()) ;

      count++ ;
    } while(stol(tmp) != num and count < 1000);

    cout << count << " " << num << endl ;
  }
}
