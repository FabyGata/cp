#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n=1;
  cin>>t;
  while(t--) {
    int l, w, h;
    cin>>l>>w>>h;
    if(l<=20 && w<=20 && h<=20) cout<<"Case "<<n<<": good"<<endl;
    else cout<<"Case "<<n<<": bad"<<endl;
    n++;
  }
  return 0;
}
