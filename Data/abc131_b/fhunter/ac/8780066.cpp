#include<bits/stdc++.h>
#include <queue>
#include <cstring>
#define mp make_pair
#define pb push_back
#define p push
#define FOR(a,c) for(int a = 0;a<c;a++)
#define ll long long int
#define getI(a) scanf("%d",&a)
#define getII(a,b) scanf("%d%d",&a,&b)
#define getIII(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define getL(a) scanf("%lld",&a)
#define getLL(a,b) scanf("%lld%lld",&a,&b)
#define getLLl(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define BEND(c) (c).begin(),(c).end()
#define BEND2(c) (c).rbegin(),(c).rend()
#define fi first
#define se second
#define pi 3.1415926535897932384626
#define getS(a) scanf("%s",a)
#define pfi(a) printf("%d",a);
#define pfii(a,b) printf("%d%d",a,b);
#define pfl(a) printf("%lld",a);
#define pfll(a,b) printf("%lld%lld",a,b);
#define pfd(a) printf("%lf",a);
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);
#define sag (sol|1)
#define sol (root<<1)
#define ort (bas+son)/2
#define SIZE 1000000007
#define MAXN 100005
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vl;
typedef vector<pair<int, int>> vpi;
typedef vector<pair<long long, long long>> vpl;
typedef pair<int, int> pii;
typedef pair <ll, ll> pll;
typedef vector<vi> graph ;
int main(){
ll n, l;
cin >> n>> l;
if ( l < 0 && l+n-1 <= 0){
ll sum = 0;
for (int i = 0; i <n-1 ; ++i) {
sum+=l +i;
}
cout << sum ;
return 0;
}else if(l < 0 && l +n-1 > 0){
ll sum = 0;
for (int i = 0; i <n ; ++i) {
sum+=l+i;
}
cout << sum;
return 0;
}else if ( l >= 0 && l +n-1 >= 0){
ll sum = 0;
for (int i = 1; i <n ; ++i) {
sum+= l+i;
}
cout << sum;
return 0;
}
while (1){}
return 0;
}
