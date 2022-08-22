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
for(int i=0;i<x+1;i++){
if(i*4+(x-i)*2==y) ans = true;
}
if(ans) puts("Yes");
else puts("No");
}
