#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)n; i++)
using namespace std;
int main(){
int n,l; cin >> n >> l;
if(n+l-1>0) cout << ((l+1)+(l+n-1))*(n-1)/2 << endl;
else cout << ((l)+(l+n-2))*(n-1)/2 << endl;
}
