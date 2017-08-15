#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin>>n;
  int V[500];
  for(int i=0; i<n; i++)  cin>>V[i];
  int Y[500];
  for(int i=0; i<n; i++)  Y[V[i]-1]=i+1;
  for(int i=0; i<n; i++)  cout<<Y[i]<<" ";
  cout<<endl;
  return 0;
}
