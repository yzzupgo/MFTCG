#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<iomanip>
#include<map>
#include<cmath>
#include<cstdio>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll =long long;
using P = pair<int,int>;
int main(){
int n,m;
cin >> n >> m;
if(6<=n && n<=12)
m/=2;
if(n<=5)
m=0;
cout << m << endl;
return 0;
}
