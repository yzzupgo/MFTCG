#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define en "\n"
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define w(t) int t; cin >> t; while (t--)
void file_io(){
#ifndef ONLINE_JUDGE
freopen ("input.txt", "r", stdin);
freopen ("output.txt", "w", stdout);
#endif
}
int main()
{
fast_io();
file_io();
int x, y;
cin >> x >> y;
int avg=y/x;
if (avg<2 || avg>4 || y%2)cout <<"NO\n";
else cout << "YES\n";
return 0;
}
