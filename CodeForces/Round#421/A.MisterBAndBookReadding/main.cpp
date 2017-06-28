#include <bits/stdc++.h>
using namespace std;
int main(){ 
  int c,vo,v,a,l;
  while(cin>>c>>vo>>v>>a>>l) {
    int p=vo, h=vo, s=1, cont=2;
    bool sw=false;
      if(c==vo || vo>c) cout<<1<<endl;
      else{
	while(!sw) {
	  p=vo+(a*s);
	  //cout<<p<<endl;
	  if(p>v) p=v;
	  s++;
	  h=(h-l)+p;
	  // cout<<h<<endl;
	  if(h<c) cont++;
	  else sw=true;
	}
	cout<<cont<<endl;
      }
  }
  return 0;
}
