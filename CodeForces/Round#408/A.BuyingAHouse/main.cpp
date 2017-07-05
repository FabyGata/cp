#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, k;
  while(cin>>n>>m>>k) {
    int V[n+1];
    int mini=1000000000;
    for(int i=0; i<n; i++)  cin>>V[i];
    int a=0,b=0;
    bool sw1=false;
    bool sw2=false;
    for(int i=m; i<n && !sw1; i++) {
      if(V[i]!=0 && V[i]<=k){
	a++;
	a*=10;
	sw1=true;
      } else a++;
    }
    if(!sw1) a=mini;
    for(int i=m-2; i>=0 && !sw2; i--){
       if(V[i]!=0 && V[i]<=k){
	b++;
	b*=10;
	sw2=true;
      } else b++;
    }
    if(!sw2) b=mini;
    if(a==mini && b==mini) cout<<0<<endl;
    else    cout<<min(a,b)<<endl;
  }
  return 0;
}
