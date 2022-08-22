#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
int n;
cin >> n;
int ans = 0;
rep(i, n){
if (to_string(i).size() % 2 == 1)
ans++;
}
cout << ans << endl;
}
