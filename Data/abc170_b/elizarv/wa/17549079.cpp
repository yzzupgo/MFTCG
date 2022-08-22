#include <bits/stdc++.h>
using namespace std;
void debug() {cout<<endl;}
template<typename T,typename... Args>
void debug(T a,Args... args) {cout<<a<<" ";debug(args...);}
#define forn(i,a,b) for(int i=a;i<b;++i)
#define SZ(x) int(x.size())
#define pb push_back
#define F first
#define S second
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
int main(){
int x, y;
cin >> x >> y;
bool ans = false;
forn(i, 0, x){
int aux = x-i;
int tot = i*2 + aux*4;
if(tot == y){
ans = true;
break;
}
}
if(ans)cout << "Yes" << endl;
else cout << "No" << endl;
}
