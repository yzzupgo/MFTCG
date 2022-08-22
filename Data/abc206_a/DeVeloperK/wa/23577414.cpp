#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const long long int INF = (long long)1e15;
const long long int mod = 1e9 + 7;
#define ll long long
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define sd second
#define ft first
bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
return abs(a.ft) + abs(a.sd) < abs(b.ft) + abs(b.sd);
}
void solve() {
double n;
cin >> n;
double d = 1.08 * n;
int dd = d;
if(d < 206) {
cout << "Yay !";
} else if(d == 206) {
cout << "so-so";
} else {
cout << ":(";
}
cout << endl;
}
int main() {
int t = 1;
while(t--) {
solve();
}
return 0;
}
