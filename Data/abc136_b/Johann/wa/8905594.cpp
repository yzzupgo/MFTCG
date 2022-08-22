#include <bits/stdc++.h>
using namespace std;
int main() {
cin.tie(nullptr);
ios::sync_with_stdio(false);
int n;
cin >> n;
int res = 0;
for (int i = 1; i <= n; ++i){
if(n % 2 == 1)res++;
}
cout << res << endl;
}
