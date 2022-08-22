#include <bits/stdc++.h>
using namespace std;
#define ipr pair<int, int>
#define pb push_back
#define ff first
#define ss second
#define fr(i,j,k) for (int i = j; i < k; i++)
#define rf(i,j,k) for (int i = j; i >= k;i--)
#define int long long
#define ll unsigned long long
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
#define mp make_pair
#define inf INT_MAX
#define read_file() ; freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define IOS std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int Maxn = 2019;
const ld pi = acos(-1);
const int mod = 1000000007;
template<class T> ostream& operator <<(ostream &out,vector<T> &A){for(auto x:A) out<<x<<" ";return out;}
template<class T> ostream& operator <<(ostream &out,set<T> &A){for(auto x:A) out<<x<<" ";return out;}
template <class T1,class T2>T1 powr(T1 a,T2 b){T1 res = 1;fr(i,1,b+1)res = res*a;return res;}
int32_t main(){
int n,temp,x=0,sum=0;
cin>>n;
temp=n;
while(n!=0)
{
n=n/10;
x++;
}
if(x==1) cout<<temp;
else {
for(int i=1;i<x;i+=2){
sum=sum+9*powr(10,i-1);
}
if(x%2!=0) sum=sum+temp-pow(10,x-1)+1;
cout<<sum;
}
return 0;
}
