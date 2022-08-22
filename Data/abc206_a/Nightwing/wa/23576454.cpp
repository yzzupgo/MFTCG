#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<bitset>
#define RT(s) return cout<<s,0
#define YES cout<<"Yay!"<<endl
#define NO cout<<"NO"<<endl
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define Endl cout<<"\n";
#define endl "\n"
#define ll long long
#define PI 3.14159265
#define spc " "
#define fixed(n) cout << fixed << setprecision(n)
using namespace std;
void File() {
#ifndef ONLINE_JUDGE
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif
}
void Nightwing() {
File();
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
}
bool pal(string s) {
string ss = s;
reverse(all(ss));
if(ss == s) {
return 1;
}
return 0;
}
ll a[105][105];
int main() {
Nightwing();
ll n;
const double yen = 1.08;
cin >> n;
ll ans = n * yen;
if(ans < 206) {
YES;
return 0;
}
(ans == 206) ? cout << "so-so" : cout << ": (" << endl;
}
