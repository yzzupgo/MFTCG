#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;
int main(){
int n,l;
cin >> n >> l;
int sum = n*(2l+n-1)/2;
if(l+n-1 < 0) cout << sum-(l+n-1);
else if(l > 0) cout << sum-l;
else cout << sum << endl;
return 0;
}
