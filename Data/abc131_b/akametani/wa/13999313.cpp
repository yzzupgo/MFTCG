#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define ll long long
int main(){
int n, l;
cin >> n >> l;
int ans = 400;
rep(i, n){
int aji = l + i;
ans = min(ans, abs(aji));
}
cout << ans << endl;
return 0;
}
