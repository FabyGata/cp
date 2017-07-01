#include <bits/stdc++.h>
using namespace std;
int f(int n){
  int s=0;
  while(n>0) {
    int d=n%10;
    s+=d;
    n/=10;
  }
  return s;
}
int main () {
  int n;
  while(true) {
    cin>>n;
    if(n==0) break;
    while(n>=10) {
      int s = f(n);
      n=s;
    }
    cout<<n<<endl;
  }
  return 0;
}
