#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rer(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);(i)++)
using ll = long long;
using P = pair<int,int>;
const int INF = 1001001001;
int main(){
int N,L;
int ans = 0;
cin >> N >> L;
if(L>=0){
cout << (N-1)*(2*L+N)/2 << endl;
}else{
if(L+N>0) cout << 0 << endl;
else cout << (N-1)*(2*L+N-2)/2 << endl;
}
}
