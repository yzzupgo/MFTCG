#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
int main(){
int n,l;cin >> n >> l;int a[n],ans = 0;
rep(i,n){a[i] = l+i;ans += a[i];}
cout << ans - *min_element(a,a+n);
return 0;
}
