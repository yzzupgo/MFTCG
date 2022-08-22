#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define ll long long
int main(){
int n, l;
cin >> n >> l;
int ans = 0;
int aji = 500;
rep(i, n){
int d = l+i;
if(abs(d) < abs(aji)) aji = d;
ans += d;
}
cout << ans-aji << endl;
return 0;
}
