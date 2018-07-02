#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std ;

// Quick Union with improvements (based on Sedgewicks youtube video)
// (1) When creating a union make the smallest tree a child of the tallest
//     tree's root.
// (2) When searching for the root, shorten the path of the node to the root.

class QuickUnion {
private:
  vector<int> id;
  vector<int> sz;

  // Given the node, return its root.
  // While looking for the root, shorten the path
  // between the node and the root.
  int root(int i) {
  	while (i != id[i]) {
  		id[i] = id[id[i]];
  		i = id[i];
  	}
  	return i;
  }
public:

  // constructor
  QuickUnion(int N) {
  	id.resize(N);
  	sz.resize(N);
  	for(int i = 0; i < N; i++) {
  		id[i] = i;
  		sz[i] = 1;
  	}
  }

    // Two nodes are connected if they share the same root
    bool areConnected(int p, int q) {
    	return root(p) == root(q);
    }

    // Connect the smallest tree to the root of the tallest.
    void connect(int p, int q){
    	int i = root(p);
    	int j = root(q);
    	if (sz[i] < sz[j])  { id[i] = j; sz[j] += sz[i]; }
    	else                { id[j] = i; sz[i] += sz[j]; }
    }

    int MaxSize(int n)
    {
      int max = 1;
      for(int i = 0; i < n; i++)
      {
        if(sz[i] > max)
        {
          max = sz[i] ;
        }
      }

      return max ;
    }
  };

int main()
{
  while(true)
  {
    int n,m ;
    cin >> n >> m ;

    if(n == 0 and m == 0)
    {
      break ;
    }

    map<string,int> M ;
    string creature ;
    for(int i = 0; i < n; i++)
    {
      cin >> creature ;
      M[creature] = i ;
    }
    QuickUnion QU(n) ;
    string st, st2 ;

    for(int i = 0; i < m; i++)
    {
      cin >> st >> st2 ;
      QU.connect(M[st],M[st2]) ;
    }

    cout << QU.MaxSize(n) << endl;
    cin >> ws ;

  }

  return 0 ;
}
