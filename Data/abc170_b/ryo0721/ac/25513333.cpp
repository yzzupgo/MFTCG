#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using LL = long long;
using P = pair<int,int>;
constexpr long long LINF = 1001001001001001001;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)
using Graph = vector<vector<int>>;
int main(){
int X, Y;
cin >> X >> Y;
bool flag =false;
for(int i = 0; i <= X; ++i){
for(int j = 0; j <= X; ++j){
int num = i*2+j*4, cnt =i+j;
if(cnt==X&&num==Y) flag = true;
}
}
if(flag) cout << "Yes" << endl;
else cout << "No" << endl;
}
