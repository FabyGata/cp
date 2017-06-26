#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b,i,j;
  while(cin>>a>>b){
    int c=0;
    int d=1;
    for(i=1 ; i<=a && a>=0; i+=2){
      a-=i;
      c++;
      //cout<<a<<endl;
    }
    for(j=2 ; j<=b && b>=0; j+=2){
      b-=j;
      d++;
      // cout<<b<<endl;
    }
    //cout<<"c= "<<c<<" d= "<<d<<endl;
    if(c<d) cout<<"Vladik"<<endl;
    else{
      if(c>d)cout<<"Valera"<<endl;
    }
    if(c==d){
      if (a==0 || b==0 ){
	if(a==0) cout<<"Valera"<<endl;
	else{
	  if(b==0) cout<<"Vladik"<<endl;
	}
      }else{
	if(i>j)cout<<"Valera"<<endl;
	else{
	  if(i<j)cout<<"Vladik"<<endl;
	}
      }      
    }
  }
  return 0;
}
