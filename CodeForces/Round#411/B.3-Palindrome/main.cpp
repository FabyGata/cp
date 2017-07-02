#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n){
    string x="";
    string c="aabb";
    int d=0;
    for(int i=0 ; i<n ; i++){
      x+=c[d];
      d++;
      if(d==4) d=0;
    }
    cout<<x<<endl;
  }
  return 0;
}
