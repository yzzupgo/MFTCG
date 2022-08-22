#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0; i<(n);++i)
#define pb push_back
template<typename T> using Graph = vector<vector<T>>;
template<typename T> T in(){T x;cin>>x;return x;};
template<typename T> void out(T x){cout << x << endl;};
int main()
{
int n,l;
cin >> n >> l;
vector<int> a(n);
rep(i, n) a[i] = l + i;
int e;
int m = INT32_MAX;
rep(i, n){
if(abs(a[i]) < m){
m = abs(a[i]);
e = i;
}
}
cout << accumulate(a.begin(), a.end(), 0) - a[e] << endl;
return 0;
}
