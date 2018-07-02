#include <iostream>
#include <vector>
using namespace std ;


int main()
{
  int N, R, C, B ;
  while (cin >> N)
  {
    if(N == 0)
    {
      break ;
    }

    cin >> R >> C >> B ;
    int Field[R][C] ;
    int After[R][C] ;

    for(int i = 0; i < R ; i++)
    {
      for(int j = 0; j < C; j++)
      {
        cin >> Field[i][j] ;
        After[i][j] = Field[i][j] ;
      }
    }

    while(B > 0)
    {
      for(int i = 0; i < R ; i++)
      {
        for(int j = 0; j < C; j++)
        {
          if(j < C-1 and Field[i][j] == (Field[i][j+1] + 1)%N)
          {
            After[i][j] = Field[i][j+1] ;
          }

          else if(i < R-1 and Field[i][j] == (Field[i+1][j] + 1)%N)
          {
            After[i][j] = Field[i+1][j] ;
          }

          else if(j > 0 and Field[i][j] == (Field[i][j-1] + 1)%N)
          {
            After[i][j] = Field[i][j-1] ;
          }

          else if(i > 0 and Field[i][j] == (Field[i-1][j] + 1)%N)
          {
            After[i][j] = Field[i-1][j] ;
          }
        }
      }
      for(int i = 0; i < R ; i++)
      {
        for(int j = 0; j < C; j++)
        {
          Field[i][j] = After[i][j] ;
        }
      }
      B-- ;
    }



    // OUTPUT:
    for(int i = 0; i < R ; i++)
    {
      for(int j = 0; j < C; j++)
      {
        if(j == C-1)
        {
          cout << After[i][j] ;
        }

        else
        {
          cout << After[i][j] << " " ;
        }

      }
      cout << endl ;
    }
  }
  return 0 ;
}
