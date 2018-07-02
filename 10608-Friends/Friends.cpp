#include <iostream>
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

    int Max()
    {
      int M = 1 ;
      for(int i = 0; i < sz.size(); i++)
      {
        if(sz[i] > M)
        {
          M = sz[i] ;
        }
      }
      return M ;
    }
  };


  int main()
  {
    // cout << "ea" << endl ;
    int cases ;
    cin >> cases ;
    while(cases > 0)
    {
      // cout << cases << endl ;
      int N,M ;
      cin >> N >> M ;
      // cout << N << M << endl ;
      QuickUnion QU(N) ;

      while(M > 0)
      {
        int a, b ;
        cin >> a >> b ;
        if(!QU.areConnected(a-1,b-1))
        {
          QU.connect(a-1,b-1) ;
        }

        M--;
      }

      cout << QU.Max() << endl  ;

      cases-- ;
    }
    return 0 ;
  }
