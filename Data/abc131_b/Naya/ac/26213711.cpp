#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rer(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);(i)++)
using ll = long long;
using P = pair<int,int>;
const int INF = 1001001001;
const long mod = 1000000007;
const string alphabet = "abcdefghijklmnopqrstuvwxyz";
int main(){
int N,L;
cin >> N >> L;
int min = L;
int max = L+N-1;
int ans = 0;
if(min*max<=0){
for(int i=min;i<=max;i++){
ans += i;
}
}else if(min>0&&max>0){
for(int i=min+1;i<=max;i++){
ans += i;
}
}else{
for(int i=min;i<=max-1;i++){
ans += i;
}
}
cout << ans << endl;
}
