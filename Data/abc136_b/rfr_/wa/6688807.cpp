#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vchar;
typedef vector<vector<char>> vvchar;
typedef vector<int> vint;
typedef vector<vector<int>> vvint;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvll;
typedef priority_queue<long long> prque;
#define ain(i,n,a) for(long long i=0;i<(long long)(n);i++){cin>>a[i];}
#define aout(i,n,a) for(long long i=0;i<(long long)(n);i++){if(i){cout<<" ";}cout<<a[i];if(i==n-1){cout<<endl;}}
#define rep(i,n) for(long long i=0;i<(long long)(n);i++)
#define vsort(v) sort((v).begin(),(v).end())
#define vrsort(v) sort((v).rbegin(),(v).rend())
#define vreverse(v) reverse((v).begin(),(v).end())
#define pf(a) push_front(a)
#define pb(a) push_back(a)
#define INF 1998021900
#define MOD 1000000007
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
ll n;cin>>n;
if(n==100000){cout<<90909<<endl;return 0;}
if(n>=10000){
cout<<(909+n-9999)<<endl;
}else if(n>=1000){
cout<<909<<endl;
}else if(n>=100){
cout<<(9+n-99)<<endl;
}else if(n>10){
cout<<9<<endl;
}else{
cout<<n<<endl;
}
}
