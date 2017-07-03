#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,s;
  while(cin>>n) {
    string V[n+10];
    for(int i=0; i<n; i++) cin>>V[i];
    int mini=1000000000;
    bool sw2=false;
    for(int i=0; i<n; i++){
      int c=0;
      string x=V[i];
      for(int j=0; j<n; j++){
	s=0;
	if(V[j]!=V[i]){
	  string y=V[j];
	  bool sw=false;
	  while(!sw){
	    string z=y.substr(1);
	    z+=y[0];
	    s++;
	    y=z;
	    if(x==z || s>y.length()) sw=true;
	  }
	  if(s>y.length()) sw2=true;
	}
	c+=s;
      }
      mini=min(mini,c);
    }
    if(sw2) cout<<-1<<endl;
    else cout<<mini<<endl;
  }
  return 0;
}
