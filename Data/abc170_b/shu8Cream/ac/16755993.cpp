#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main(){
int x,y;
cin>>x>>y;
rep(i,x+1)rep(j,x+1-i){
if(y==i*2+j*4 && i+j==x){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
