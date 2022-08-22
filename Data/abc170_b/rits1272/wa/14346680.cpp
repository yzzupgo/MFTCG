#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define MAX 1e9
#define MIN -1e9
#define MOD 1000000007
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
float x, y;
cin >> x >> y;
float crane = ((4*x) - y)/2;
int c = crane;
if(crane == c && crane >= 0)
cout << "Yes\n";
else
cout << "No\n";
return 0;
}
