#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)n; i++)
using namespace std;
int main(){
int n,l; cin >> n >> l;
if(n+l-1>0) cout << l*n + (1+n)*n/2 - n -l << endl;
else cout << l*n + (1+n)*n/2 - n - (l + n - 1) << endl;
}
