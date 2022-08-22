#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 1000000000
#define fi first
#define sc second
#define rep(i,x) for(int i=0;i<x;i++)
#define repn(i,x) for(int i=1;i<=x;i++)
#define SORT(x) sort(x.begin(),x.end())
#define ERASE(x) x.erase(unique(x.begin(),x.end()),x.end())
#define POSL(x,v) (lower_bound(x.begin(),x.end(),v)-x.begin())
#define POSU(x,v) (upper_bound(x.begin(),x.end(),v)-x.begin())
const int MAX = 510000;
const int MOD = 1000000007;
int main(){
ll cnt = 1;
ll N;cin>>N;
if(N<10){
cout<<N<<endl;
}
else if(N<100){
cout<<9<<endl;
}
else if(N<1000){
cout<<N-90<<endl;
}
else if(N<10000){
cout<<909<<endl;
}
else if(N<100000){
cout<<N-9090<<endl;
}
else{
cout<<90909<<endl;
}
}
