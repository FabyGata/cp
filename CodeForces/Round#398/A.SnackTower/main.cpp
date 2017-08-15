#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,r;
   cin>>n;
    int V[n+1],Y[n+1];
    for(int i=0; i<n; i++){
        cin>>V[i];
        Y[i+1]=0;
    }
    r=n;
    for(int i=0; i<n; i++) {
        Y[V[i]]=1;
        if(V[i]==r){
            while(Y[r]==1){
	      cout<<r<<" ";
	      r--;
	    }
        }
        cout<<endl;
    }
    return 0;
}
