#include <bits/stdc++.h>
using namespace std;
typedef pair <int , int >ii;
int interseccion(ii a, ii b){
  if(a.second>=b.first) return 0;
  else return b.first-a.second;
}
int main() {
  int n,m;
  while(cin>>n) {
    vector <ii> V;
    vector <ii> W;
    int a,b;
    for(int i=0; i<n; i++) {
      cin>>a>>b;
      ii p;
      p.first=a;
      p.second=b;
      V.push_back(p);
    }
    cin>>m;
    for(int i=0; i<m; i++) {
      cin>>a>>b;
      ii p;
      p.first=a;
      p.second=b;
      W.push_back(p);
    }
    int maxi=0;
    for(int i=0; i<n; i++) {
      ii x=V[i];
      for(int j=0; j<m; j++) {
	ii y=W[j];
	maxi=max(maxi, interseccion(x,y));
      }
    }
    cout<<maxi<<endl;
  }
  return 0;
}
