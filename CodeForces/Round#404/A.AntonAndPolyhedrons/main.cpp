#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,c;
  string x;
  cin>>n;
  c=0;
  for(int i=0; i<n ; i++) {
    cin>>x;
    if(x=="Tetrahedron") c+=4;
    if(x=="Cube") c+=6;
    if(x=="Octahedron") c+=8;
    if(x=="Dodecahedron") c+=12;
    if(x=="Icosahedron") c+=20;
  }
  cout<<c<<endl;
  return 0;
}
