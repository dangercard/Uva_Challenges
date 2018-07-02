/* 8 Queens Chess Problem */
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int N = 5;
int row[9], TC, a, b, lineCounter; // it is ok to use global variables in competitive programming


// function place:
// Checks to see if a queen in this col and row is valid

bool place(int col, int tryrow) {
  for (int prev = 1; prev < col; prev++) // check previously placed queens
    if (row[prev] == tryrow || (abs(row[prev] - tryrow) == abs(prev - col)))
      return false; // an infeasible solution if share same row or same diagonal
  return true;
}

// function backtrack:
// Given a column tries to find a row that will accept a queen, then
// calls itself to continue to the next column.

void backtrack(int col) {
  // try all possible row
  for (int tryrow = 1; tryrow <= N; tryrow++)
    // if can place a queen at this col and row...
    if (place(col, tryrow)) {
      // put this queen in this col and row
      row[col] = tryrow;
      if (col == N ) {
        for (int j = 1; j <= N; j++) printf(" %d", row[j]);
        printf("\n");
      }
      else {
        // if this is not the last col, then recursively try next column
        backtrack(col + 1);
      }
   }
}

int main() {
  scanf("%d", &TC);
  while (TC--) {
    scanf("%d %d", &a, &b);
    memset(row, 0, sizeof row);
    lineCounter = 0;
    row[1] = 1;
    backtrack(2);
    if (TC) printf("\n");
  }
  return 0;
}
