#include <bits/stdc++.h>
using namespace std;
int main(){
  int M[10][10];
  int x,y;
  for(int i=0; i<5; i++) {
    for(int j=0; j<5; j++) {
      cin>>M[i][j];
      if(M[i][j]==1){
	x=i;
	y=j;
      }
    }
  }
  int c=0;
  if(x==2 && y==2) cout<<0<<endl;
  else{
    if(x>2) c+=x-2;
    else{
      if(x<2) c+=2-x;
      else{
	if(x==2) c+=0;
      }
    }
    if(y>2) c+=y-2;
    else{
      if(y<2) c+=2-y;
      else{
	if(y==2) c+=0;
      }
    }
    cout<<c<<endl;
  }
  return 0;
}
