#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(x) x.begin(),x.end()
int main() {
int n;
cin >> n;
int ans;
if(n<10)
ans=n;
else if(n<100)
ans=9;
else if(n<1000)
ans=n-90;
else if(n<10000)
ans=909;
else if(n<100000)
ans=n-9090;
else
ans=90909;
cout << ans << endl;
}
