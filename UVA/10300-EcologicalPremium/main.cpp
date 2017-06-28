#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,f,a,b,c;
  cin>>n;
  while(n--){
    cin>>f;
    int cont=0;
    for(int i=0 ; i<f ; i++){
      cin>>a>>b>>c;
      cont+=(a*c);
    }
    cout<<cont<<endl;
  }
  return 0;
}
