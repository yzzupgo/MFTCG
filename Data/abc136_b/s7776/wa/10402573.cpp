#include<iostream>
#include<stdio.h>
#include<vector>
#include<float.h>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cstring>
#include<math.h>
#include<cmath>
#include<sstream>
#include<set>
#include<map>
#include<queue>
#include <cassert>
#include <cmath>
#include<cstdint>
#define INF 1e7
#define rep(i,n) for(int i=0;(i)<(int)(n);i++)
#define REP(i,a,b) for(int i=(int)(a);(i)<=(int)(b);i++)
#define VEC(type,c,n) std::vector<type> c(n);for(auto& i:c)std::cin>>i;
#define vec(type,n) vector<type>(n)
#define vvec(m,n) vector<vector<int>> (int(m),vector<int>(n))
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int,int>;
int main(){
int n;cin>>n;
int res = 0;
REP(i,1,n){
int now = i,cnt = 0;
while(now){
now /= 10;
cnt++;
if(cnt%2==1)res++;
}
}
cout<<res;
}
