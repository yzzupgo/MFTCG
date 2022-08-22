#include <bits/stdc++.h>
using namespace std;
#include <math.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int64_t INF = 1LL << 60;
int main() {
int x,y;
cin>>x>>y;
for(int i=0;i<=x;i++){
int j=x-i;
if(i*2+j*4==y){cout<<"Yes"<<endl;return 0;}
}
cout<<"No"<<endl;
return 0;
}
