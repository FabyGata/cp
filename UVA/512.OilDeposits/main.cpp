#include <bits/stdc++.h>
using namespace std;
int n, m;
string M[110];
int X[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int Y[] = {-1, 0, 1, 1, 1, 0, -1, -1};
void ff(int i, int j) {
  M[i][j] = '*';
  for(int k=0; k<8; k++){
    int a = i + X[k];
    int b = j + Y[k];
    if(a>=0 && b>=0 && a<n && b<m && M[a][b] == '@') ff(a,b);
  }
}

int main () {
  while(true) {
    scanf("%d %d", &n, &m);
    if(n==0 && m==0) break;
    for(int i=0; i<n; i++) cin >> M[i];
    
    int c = 0;
    for(int i=0; i<n; i++) {
      for(int j=0; j<m; j++) {
	if(M[i][j] == '@'){
	  ff(i,j);
	  c++;
	}
      }
    }
    
    printf("%d\n", c);
  }
  
  return 0;
}
