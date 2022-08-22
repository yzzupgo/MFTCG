#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
typedef long long ll;
template<typename T> bool chmax(T &a, T b) {if(a <= b){a = b; return true;}return false;}
template<typename T> bool chmin(T &a, T b) {if(a >= b){a = b; return true;}return false;}
int main(void){
int x, y;
cin >> x >> y;
if(y % 2 != 0 || x * 4 < y || y < x * 2){
cout << "No" << endl;
}else{
cout << "Yes" << endl;
}
return 0;
}
