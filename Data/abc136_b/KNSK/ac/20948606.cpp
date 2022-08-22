#include <bits/stdc++.h>
using namespace std;
int main(){
int ans = 0;
long long n; cin >> n;
for (int i = 1; i < n+1; i++)
{
if(i<10) ans++;
if(i<1000&i>99) ans++;
if(i<100000&i>9999) ans++;
}
cout << ans << "\n";
}
