#include<bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(),v.end()
#define puts(i) cout << i << endl
#define INF INT_MAX;
#define INFL LLONG_MAX;
typedef long long ll;
using namespace std;
int main(){
int x,y; cin >> x >> y;
bool ans = false;
int n = y/4;
for(int i=0;i<n+1;i++){
if(i+(y-4*i)/2==x){
ans = true;
}
}
if(ans) puts("Yes");
else puts("No");
}
