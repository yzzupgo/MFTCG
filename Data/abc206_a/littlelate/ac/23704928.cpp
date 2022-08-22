#include<iostream>
#include<algorithm>
#include<map>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<queue>
#include<vector>
#include<set>
#define ll long long
#define pb push_back
#define forn(i,x,n) for(int i=x;i<=n;++i)
#define forr(i,x,n) for(int i=n;i>=x;--i)
#define lson (rt<< 1)
#define rson (rt<< 1 | 1)
#define gmid ((l+r)>> 1 )
using namespace std;
const int maxn = 20000050;
int main() {
int n;
cin >> n;
int x = (int)(floor(n * 1.08));
if(x == 206) {
cout << "so-so" << endl;
} else if(x > 206) {
cout << ":(" << endl;
} else {
cout << "Yay!" << endl;
}
}
