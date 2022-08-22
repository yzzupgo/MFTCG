#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define db double
#define pii pair<int,int>
#define pli pair<ll,int>
#define pil pair<int,ll>
#define pll pair<ll,ll>
#define ti3 tuple<int,int,int>
#define mat vector<vector<int>>
const int inf = 1 << 30;
const ll linf = 1LL << 62;
const db EPS = 1e-7;
template<class T> void chmin(T& x, T y){if(x > y) x = y;}
template<class T> void chmax(T& x, T y){if(x < y) x = y;}
int main(){
int X, Y;
cin >> X >> Y;
if(Y % 2 != 0 || Y > X * 4){
cout << "No" << endl;
}else{
cout << "Yes" << endl;
}
return 0;
}
