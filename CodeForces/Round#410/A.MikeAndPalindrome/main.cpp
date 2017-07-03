#include <bits/stdc++.h>
using namespace std;
int main() {
  string x;
  while(cin>>x) {
    int c=0;
    int u=x.length()-1;
    for(int i=0; i<x.length()/2; i++){
      if(x[i]!=x[u]) c++;
      u--;
    }
    if(c==0 && x.length() %2==1) cout<<"YES"<<endl;
    else{
      if(c==1) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
  }
  return 0;
}
