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
#define INF 1e9
#define rep(i,n) for(int i=0;(i)<(int)(n);i++)
#define REP(i,a,b) for(int i=(int)(a);(i)<=(int)(b);i++)
#define VEC(type,c,n) std::vector<type> c(n);for(auto& i:c)std::cin>>i;
#define vec(type,n) vector<type>(n)
#define vvec(m,n) vector<vector<int>> (int(m),vector<int>(n))
#define ALL(a) (a).begin(),(a).end()
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int,int>;
vector<int>bitSearch(int bit,int n){
vector<int>S;
rep(i,n)if(bit&(1<<i))S.push_back(i);
return S;
}
int d[3] = {-1,0,1};
int main(){
int n,l;cin>>n>>l;
vector<int>v(n);
int sum = 0;
rep(i,n){
v[i] = l+i;
sum += v[i];
}
sort(ALL(v));
rep(i,n){
if(v[i]<0)continue;
else {
sum -= v[i];
break;
}
}
cout<<sum;
}
