#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  while(cin>>s){
    string x="hello";
    int p=0;
    int c=0;
    for(int i=0; i<s.length(); i++) {
      if(s[i]==x[p]){
	c++;
	p++;
      }
    }
    if(c==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}
