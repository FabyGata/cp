#include <bits/stdc++.h>
using namespace std;
int main () {
  string x;
  int n=1;
  while(true) {
    cin>>x;
    if(x=="*") break;
    if(x=="Hajj") cout<<"Case "<<n<<": Hajj-e-Akbar"<<endl;
    else  cout<<"Case "<<n<<": Hajj-e-Asghar"<<endl;
    n++;
  }
  return 0;
}
