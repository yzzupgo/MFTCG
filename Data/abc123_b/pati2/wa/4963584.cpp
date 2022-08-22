#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  
  int res=0;
  if(A%10==0){ res+=A; }
  if(B%10==0){ res+=B; }
  if(C%10==0){ res+=C; }
  if(D%10==0){ res+=D; }
  if(E%10==0){ res+=E; }

  int last=0;
  for(int i=9; i>=1; i--){
    if(A%10==i){ res+=A-i+10; last=i;}
    if(B%10==i){ res+=B-i+10; last=i;}
    if(C%10==i){ res+=C-i+10; last=i;}
    if(D%10==i){ res+=D-i+10; last=i;}
    if(E%10==i){ res+=E-i+10; last=i;}
    
  }
  
  res+=last-10;
  
  cout << res << endl;
  
}