#include <bits/stdc++.h>
using namespace std;
using lint = long long;
template<class T = int> using V = vector<T>;
template<class T = int> using VV = V< V<T> >;
int main() {
cin.tie(nullptr); ios::sync_with_stdio(false);
int N,L;
cin >> N >>L;
int eat;
if(L>0) eat=L;
if(L+N-1<0) eat=L+N-1;
else eat=0;
int kekka;
kekka = N*(2*L+N-1)/2-eat;
cout << kekka << '\n';
}
