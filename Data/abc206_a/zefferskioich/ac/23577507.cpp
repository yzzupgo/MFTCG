#pragma GCC optimize("O3","unroll-loops","omit-frame-pointer","inline")
#pragma GCC option("arch=native","tune=native","no-zeroupper")
#pragma GCC target("avx","popcnt")
#include <x86intrin.h>
#include <bits/stdc++.h>
using namespace std;
#define eb emplace_back
#define mp make_pair
#define hello cout<<"hello"<<"\n"
#define forr(i,a,b) for(int i=a;i<b;i++)
#define it(s) for(auto itr:s)
#define dvg(s) for(auto itr:s) cout<<itr<<" ";cout<<endl;
#define dbg(s) cout<<#s<<"= "<<s<<endl;
typedef long long int lli;
typedef unsigned long long int ulli;
const lli INF = (lli)1e17 + 5;
const ulli MOD = 1e9 + 7;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin >> n;
if((int)(n * 1.08) > 206) {
cout << ":(\n";
} else if((int)(n * 1.08) == 206) {
cout << "so-so\n";
} else {
cout << "Yay!\n";
}
return 0;
}
