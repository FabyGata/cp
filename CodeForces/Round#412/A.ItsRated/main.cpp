#include <bits/stdc++.h>
using namespace std;
typedef pair< int , int > ii;
int main() {
  int n;
  while(cin>>n) {
    vector<ii> V;
    for(int i=0 ; i<n ; i++) {
      int a, b;
      cin>>a>>b;
      ii P;
      P.first=a;
      P.second=b;
      V.push_back(P);
    }
    int c1=0 , c2 = 0 , c3=0;
    for(int i=0 ; i<n ; i++) if(V[i].first != V[i].second) c1++;

    for(int i=0 ; i<n-1 ; i++)  if(V[i].first < V[i+1].first) c2++;
    if(c1!=0)
      cout<<"rated"<<endl;
    else if(c1==0 && c2 !=0)
      cout<<"unrated";
    else
      cout<<"maybe"<<endl;
  }
  return 0;
}
