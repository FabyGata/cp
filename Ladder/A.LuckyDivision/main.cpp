#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  while(cin>>n) {
    int V[10000];
    V[0]=4, V[1]=7, V[2]=44, V[3]=77, V[4]=47, V[5]=74, V[6]=444, V[7]=777, V[8]=477, V[9]=447, V[10]=774, V[11]=744, V[12]=474, V[13]=747;
    bool sw=false;
    for(int i=0; i<14; i++){
      if(n%V[i]==0){
	sw=true;
	cout<<"YES"<<endl;
	break;
      }
    }
    if(!sw) cout<<"NO"<<endl;
  }
  return 0;
}
