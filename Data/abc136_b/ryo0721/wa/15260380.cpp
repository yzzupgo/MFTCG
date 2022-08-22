#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using LL = long long;
using P = pair<int,int>;
int main(){
int N; cin >> N;
if(1<=N&&N<=99) cout << 9;
if(100<=N&&N<=999) cout << N - 99 + 9 << endl;
if(1000<=N&&N<=9999) cout << 909 << endl;
if(10000<=N&&N<=99999) cout << N - 9999 + 909 << endl;
if(N==100000) cout << 90909 << endl;
return 0;
}
