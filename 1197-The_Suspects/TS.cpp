#include <iostream>
#include <vector>
#include <string>
#include <sstream>
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

   int rootSize()
   {
     return sz[root(0)] ;
   }
 };


int main()
{
  int n,m ;
  while(true)
  {

    cin >> n >> m ;

    if(n == 0)
    {
      break ;
    }
    QuickUnion QU(n);

    while(m+1)
    {
      string str;
      int tmp;
      vector <int> V ;
      getline(cin,str);
      stringstream S ;
      S << str ;

      while(S >> tmp)
      {
        V.push_back(tmp) ;
      }

      for(int i = 0; i < V.size() ; i++)
      {
        cout << V[i] << endl ;
        if(i == V.size() - 1)
        {
          break;
        }

        if(!QU.areConnected(V[i],V[i+1]))
        {
          QU.connect(V[i],V[i+1]) ;
        }
      }
      m--;
    }

    cout << QU.rootSize() << endl ;

  }
}
